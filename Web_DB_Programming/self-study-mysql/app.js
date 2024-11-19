const express = require('express');
const methodOverride = require('method-override');

const contactRoutes = require('./routes/contactRoutes');
const loginRoutes = require('./routes/loginRoutes');

const app = express();
const port = 3000;

// 템플릿 엔진 설정
app.set('view engine', 'ejs');
app.set('views', './views');


app.use(express.json());
app.use(express.urlencoded({extended: true}));

// 폼에서는 기본적으로 GET과 POST만 지원하는데, method-override를 사용해 PUT, DELETE를 사용
app.use(methodOverride('_method'));

app.use('/contacts', contactRoutes);
app.use('/', loginRoutes);
app.use(express.static("./public"));

app.listen(port, () => {
    console.log(`Server is running on port ${port}`);
});

