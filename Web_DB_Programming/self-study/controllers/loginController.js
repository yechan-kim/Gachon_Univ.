const asyncHandler = require("express-async-handler");
const User = require("../models/userModel");
const crypto = require('crypto');
const jwt = require("jsonwebtoken");
require("dotenv").config();

const jwtSecret = process.env.JWT_SECRET;

const getLogin = (req, res) => {
    res.render("home");
};

const loginUser = asyncHandler(async (req, res) => {
    const {username, password} = req.body;
    const user = await User.findOne({username});

    if(!user){
        return res.status(401).json({message: "일치하는 사용자가 없습니다."});
    }

    const hashedPassword = crypto.createHash('sha256').update(password).digest('hex');
    const isMatch = await user.password === hashedPassword;

    if(!isMatch){
        return res.status(401).json({message: "비밀번호가 일치하지 않습니다."});
    }

    const token = jwt.sign({id: user._id}, jwtSecret);
    res.cookie("token", token, {httpOnly: true});
    res.redirect("/contacts");
});

const getRegister = (req, res) => {
    res.render("register");
};

const registerUser = asyncHandler(async (req, res) => {
    const {username, password, password2} = req.body;
    if (password === password2) {
        const hashedPassword = crypto.createHash('sha256').update(password).digest('hex');
        const user = User.create({username, password: hashedPassword});
        res.status(201).json({message: "회원가입 성공", user: user});
    } else {
        res.send("회원가입 실패");
    }
});

module.exports = {
    getLogin,
    loginUser,
    getRegister,
    registerUser,
};
