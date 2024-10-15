const express = require("express");
const errorHandler = require("./middlewares/errorHandler");
const app = express();

const port = 3000;

app.get("/", (req, res) => {
    res.status(200).send("Hello Node!");
});

app.use(errorHandler);
app.use(express.json());
app.use(express.urlencoded({ extended: true }));
app.use("/contacts", require("./routes/contactRoutes"));

// app.get("/test", (req, res) => {
//   const error = new Error("테스트용 에러");
//   error.status = 401;
//   next(error);
// });

app.listen(port, () => {
    console.log(`${port}번 포트에서 서버 실행 중`);
});
