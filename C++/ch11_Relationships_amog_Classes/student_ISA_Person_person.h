/**************************************************************
 * Person 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef STUDENT_ISA_PERSON_PERSON_H
#define STUDENT_ISA_PERSON_PERSON_H
class Person {
  protected: 
    long identity;
  public:
    Person();
    Person(long identity);
    ~Person();
    Person(const Person& person);
    void print() const;  
};
#endif