#include <iostream> // 이 파일에서 사용하는 헤더파일을 먼저 include
#include <string>
#include "Employee.h" // 직접만든 헤더파일은 ""로 감싼다.
#include "Permanent.h"
#include "Temporary.h"
#include "Sales.h"

#define MAX 100 // 최대 직원 수

using namespace std;

void printMenu(); // 메뉴 출력
void MakePermanent(Employee **E, int &CurrentIndex); // 정규직 고용
void MakeTemporary(Employee **E, int &CurrentIndex); // 계약직 고용
void MakeSales(Employee **E, int &CurrentIndex); // 영업직 고용
void Fire(Employee **E, int &CurrentIndex); // 직원 해고
void Inquire(Employee **E, int &CurrentIndex); // 직원 정보 전체 조회
void CleanUp(Employee **E, int &CurrentIndex); // 메모리 해제
enum // 메뉴 선택을 위한 enum 타입
{
    MAKEPERMANENT = 1,  // 1부터 시작
    MAKETEMPORARY, // 2
    MAKESALES, // 3
    FIRE, // 4
    INQUIRE, // 5
    EXIT // 6
};

int main()
{
    Employee *E[MAX]; // 직원 객체포인터 배열
    int index = 0;  //  객체포인터 배열의 인덱스 == 전체 직원 수
    int choice; // 메뉴 선택을 위한 choice 변수
    while (true) // 무한루프
    {
        printMenu();  // 메뉴 출력
        // menu-driven 구현 시작
        cout << "선택: ";
        cin >> choice;
        switch (choice) 
        {
        case MAKEPERMANENT: // choice == 1
            MakePermanent(E, index); // 정규직 고용
            break; // switch문 탈출 => while문의 다음 반복으로 이동
        case MAKETEMPORARY:
            MakeTemporary(E, index);
            break;
        case MAKESALES:
            MakeSales(E, index);
            break;
        case FIRE:
            Fire(E, index);
            break;
        case INQUIRE:
            Inquire(E, index);
            break;
        case EXIT: 
            CleanUp(E, index); // 메모리 해제 함수 호출
            return 0; // 프로그램 종료
        default: // 1~6이 아닌 다른 숫자를 입력했을 때
            cout << "올바르지 않은 선택을 하였습니다." << endl; // 경고 메시지 출력
            break; // switch문 탈출
        }
    }
    return 0; // 프로그램 종료
}

void printMenu() // 메뉴 출력
{
    cout << "------------MENU------------" << endl;
    cout << "1. 정규직 고용" << endl;
    cout << "2. 계약직 고용" << endl;
    cout << "3. 영업직 고용" << endl;
    cout << "4. 직원 해고" << endl;
    cout << "5. 직원 정보 전체 조회" << endl;
    cout << "6. 프로그램 종료" << endl;
}

void MakePermanent(Employee **E, int &CurrentIndex) // 정규직 고용 함수
{
    string name;
    int salary;
    if (CurrentIndex < MAX)
    {
        cout << "정규직으로 고용할 직원의 이름과 월급을 입력해 주새요.: ";
        cin >> name >> salary; 
        E[CurrentIndex] = new Permanent(name, salary); // 정규직 drived 객체 생성
        CurrentIndex++; // 전체 직원 수 증가
    }
    else // 최대치 초과시 error message 출력
        cout << "더이상 고용을 할 수 없습니다. (최대 100명 고용가능)" << endl;
}

void MakeTemporary(Employee **E, int &CurrentIndex) // 계약직 고용 함수
{
    string name;
    int hours, hourlyWage; // 월 근로시간, 시급
    if (CurrentIndex < MAX)
    {
        cout << "계약직으로 고용할 직원의 이름, 월 근로시간, 시급을 입력해 주새요.: ";
        cin >> name >> hours >> hourlyWage;
        E[CurrentIndex] = new Temporary(name, hours, hourlyWage); // 계약직 drived 객체 생성
        CurrentIndex++;
    }
    else
        cout << "더이상 고용을 할 수 없습니다. (최대 100명 고용가능)" << endl;
}

void MakeSales(Employee **E, int &CurrentIndex) // 영업직 고용 함수
{
    string name;
    int basePay, salesRevenue;
    if (CurrentIndex < MAX)
    {
        cout << "영업직으로 고용할 직원의 이름, 기본급, 영업이익을 입력해 주새요.: ";
        cin >> name >> basePay >> salesRevenue;
        E[CurrentIndex] = new Sales(name, basePay, salesRevenue); // 영업직 drived 객체 생성
        CurrentIndex++;
    }
    else
        cout << "더이상 고용을 할 수 없습니다. (최대 100명 고용가능)" << endl;
}

void Fire(Employee **E, int &CurrentIndex) // 직원 해고 함수
{
    string name;
    int i, j;
    cout << "해고할 직원의 이름을 입력해 주새요.: ";
    cin >> name;
    for (i = 0; i < CurrentIndex; i++) // 전체 직원 중 해당 이름을 가진 직원을 찾아서 삭제
    {
        if (E[i]->GetName() == name)
        {
            delete E[i];
            for(j=i; j<CurrentIndex-1; j++)
                E[j] = E[j+1];
            E[CurrentIndex - 1] = nullptr; //nullptr => NULL을 가리키는 포인터, typeof(E[]) == Employee * 이므로 NULL 대신 nullptr 사용
            CurrentIndex--;  // 전체 직원 수 감소
            break; // 해당 이름을 가진 직원을 찾았으므로 for문 탈출
        }
    }
    if (i == CurrentIndex) // 전체 직원을 다 돌았는데도 해당 이름을 가진 직원을 찾지 못했을 때 error message 출력
        cout << "해당 직원을 찾을 수 없습니다." << endl;
}

void Inquire(Employee **E, int &CurrentIndex) // 직원 정보 전체 조회 함수
{
    for (int i = 0; i < CurrentIndex; i++) // 전체 직원의 이름과 월급 출력
        cout << "Name: " << (*(E + i))->GetName() << ", Pay: " << (*(E + i))->GetPay() << endl;
}

void CleanUp(Employee **E, int &CurrentIndex) // 메모리 해제 함수
{
    for (int i = 0; i < CurrentIndex; i++) // 전체 직원의 메모리 해제
    {
        delete E[i];
        E[i] = nullptr;
    }
    delete[] E; // E 배열의 메모리 해제
    E = NULL;
}