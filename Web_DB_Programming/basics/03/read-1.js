// fs 모듈의 readFileSync 함수 연습하기 ( 결과 비교 파일 : 03\results\read-1.js)

const fs = require("fs");
let files = fs.readFileSync("example.txt");
console.log(files);