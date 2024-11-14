const asyncHandler = require("express-async-handler");
const dbConnect = require('../config/dbConnect');
const crypto = require('crypto'); // npm i crypto

//@desc Get login page
//@route GET /
const getLogin = (req, res) => {
  res.render("home");
};  

//@desc Login user
//@route POST /
const loginUser = asyncHandler(async (req, res) => {
  const { username, password } = req.body;

  const pw = crypto.createHash('sha256').update(password).digest('hex');
  dbConnect.query('SELECT username FROM Users WHERE username = ? AND password = ?', [username, pw], function(error, results) {
    if (error) throw new Error("Users not read");
    if (results.length > 0) {       // db에서의 반환값이 있으면 로그인 성공
      console.log(results);
      res.status(200).send("Success");
    } else {        
      console.log('User 없음');
      res.status(404).send("id or password is wrong");
    }            
  });
});

module.exports = { getLogin, loginUser };
