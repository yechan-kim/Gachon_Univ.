// 비동기로 파일 기록하기 -  writeFile 함수 (결과 비교 파일은 03\results\write-3.js)

const fs = require("fs");
const data = fs.readFile("example.txt", "utf8", (err, data) => {
    if (err) {
        console.log(err);
    }
    fs.writeFile("text-2.txt", data, (err) => {
        if (err) {
            console.log(err);
        }
        console.log("text-2.txt is saved!");
    });
});