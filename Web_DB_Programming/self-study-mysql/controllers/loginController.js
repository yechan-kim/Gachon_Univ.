const asyncHandler = require("express-async-handler");
const dbConnect = require('../config/dbConnect');
const crypto = require('crypto');
const jwt = require("jsonwebtoken");
require("dotenv").config();

const jwtSecret = process.env.JWT_SECRET;

const getLogin = (req, res) => {
    res.render("home");
};

const loginUser = asyncHandler(async (req, res) => {
    const {username, password} = req.body;

    const hashedPassword = crypto.createHash('sha256').update(password).digest('hex');

    dbConnect.query('SELECT username FROM Users WHERE username = ? AND password = ?', [username, hashedPassword], function (error, results) {
        if (error) throw new Error("Users not read");
        if (results.length > 0) {
            const token = jwt.sign({id: results._id}, jwtSecret);
            res.cookie("token", token, {httpOnly: true});
            res.redirect("/contacts");
        } else {
            return res.status(401).json({message: "일치하는 사용자가 없습니다."});
        }
    });
});

const getRegister = (req, res) => {
    res.render("register");
};

const registerUser = asyncHandler(async (req, res) => {
    const {username, password, password2} = req.body;
    if (password === password2) {
        const hashedPassword = crypto.createHash('sha256').update(password).digest('hex');

        dbConnect.query('INSERT INTO Users (username, password) VALUES (?, ?)', [username, hashedPassword], function (error, results) {
            if (error) throw new Error("User not created");
            res.status(201).json({message: "회원가입 성공", user: results});
        });
    } else {
        res.status(400).json({message: "비밀번호가 일치하지 않습니다."});
    }
});

const logout = (req, res) => {
    console.log('logout');
    res.clearCookie("token");
    res.redirect("/");
};

module.exports = {
    getLogin,
    loginUser,
    getRegister,
    registerUser,
    logout,
};
