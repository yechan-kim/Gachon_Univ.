const mongoose = require("mongoose");
require("dotenv").config();

const dbConnect = async () => {
    try {
        const connect = await mongoose.connect(process.env.DB_CONNECT);
        console.log("DB connected");
    } catch (err) {
        console.error(err);
    }
};

module.exports = dbConnect;
