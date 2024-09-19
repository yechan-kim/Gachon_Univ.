// 응답 객체 확인하기 - 응답 헤더, 응답 본문, 응답 종료  (결과 비교 파일 : 04\results\server-3.js)

const http = require("http");

const server = http.createServer((req, res) => {
    console.log(req.method);
    res.setHeader("Content-Type", "text/plain");
    res.write("Hello Node");
    res.end();
});

server.listen(3000, () => {
    console.log("3000번 포트에서 서버 실행 중");
});
