const mysql = require('mysql2');

require("dotenv").config();

const dbConnect = mysql.createConnection({
    host: 'localhost',
    user: process.env.DB_CONNECT_ID,
    password: process.env.DB_CONNECT_PW,
    database: 'gachon_db'
});

dbConnect.connect();

module.exports = dbConnect;