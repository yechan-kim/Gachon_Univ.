#include <iostream>

using namespace std;

//함수선언
int getScore();
char findGrade(int score);
void printResult(int score, char grade);

int main()
{
    //변수 선언
    int score;
    char grade;

    //함수 실행
    score = getScore();
    grade = findGrade(score);
    printResult(score, grade);

    return 0;
}

//함수 정의
int getScore()
{
    //지역 변수 선언
    int score;

    // do
    // {
    //     cout << "점수를 입력하세요(0~100): ";
    //     cin >> score;
    // } while (score < 0 || score > 100);
    while (true) //지정된 범위내의 숫자를 입력 할 때까지 반복 (do while문도 시용 가능)
    {
        //점수 입력
        cout << "점수를 입력하세요(0~100):  ";
        cin >> score;

        //범위 검사
        if (score < 0 || score > 100)
            cout << "0과 100사이의 값을 입력하세요." << endl;

        else
            break;
    }

    return score;
}

//함수 정의
char findGrade(int score)
{
    //지역 변수 선언
    char grade;

    //등급 검사
    if (score >= 90)
        grade = 'A';

    else if (score >= 80)
        grade = 'B';

    else if (score >= 70)
        grade = 'C';

    else if (score >= 60)
        grade = 'D';

    else
        grade = 'F';

    return grade;
}

//함수 정의
void printResult(int score, char grade)
{
    //결과 출력
    cout << endl;
    cout << "시험 결과 " << endl;
    cout << "점수 = " << score << "/100" << endl;
    cout << "등급 = " << grade << endl;
}