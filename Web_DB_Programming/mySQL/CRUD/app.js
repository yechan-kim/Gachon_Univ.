const express = require("express");
const swaggerJsDoc = require("swagger-jsdoc");
const swaggerUi = require("swagger-ui-express");

const app = express();

app.set("view engine", "ejs");
app.set("views", "./views");

const port = 3000;

// JSON 및 URL 인코딩된 데이터 파싱 미들웨어
app.use(express.json());
app.use(express.urlencoded({ extended: true }));

// Swagger 설정
const swaggerOptions = {
  swaggerDefinition: {
    openapi: "3.0.0",
    info: {
      title: "Contact API",
      version: "1.0.0",
      description: "API for managing contacts",
    },
    servers: [
      {
        url: `http://localhost:${port}`, // 서버 URL
      },
    ],
  },
  apis: ["./routes/*.js"], // Swagger 주석이 있는 파일 경로
};

const swaggerDocs = swaggerJsDoc(swaggerOptions);

// Swagger UI 라우트 설정
app.use("/api-docs", swaggerUi.serve, swaggerUi.setup(swaggerDocs));

// 컨택트 라우터 설정
app.use("/contacts", require("./routes/contactRoutes"));

// 서버 실행
app.listen(port, () => {
  console.log(`${port}번 포트에서 서버 실행 중`);
  console.log(`Swagger 문서: http://localhost:${port}/api-docs`);
});