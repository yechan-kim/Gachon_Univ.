/***************************************************************
 * Date 클래스의 인터페이스 파일                                    *
 ***************************************************************/
#ifndef PERSON_CONTAINS_DATE_DATE_H
#define PERSON_CONTAINS_DATE_DATE_H
class Date
{
private:
    int month;
    int day;
    int year;
    public:
        Date(int month, int day, int year);
        Date(const Date &obj);
        ~Date();
        void print() const;
};
#endif