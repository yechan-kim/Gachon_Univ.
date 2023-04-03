#include <iostream>
#include <string>
#include <limits> // vscode 사용 유저들은 , cin.ignore(numeric_limits<streamsize>::max(), '\n'); 을 사용하기 위해서 필요

using namespace std;

int main()
{
    string strg1;

    if (strg1.empty())
        cout << "strg1 is empty" << endl;

    string strg2("hello");
    string strg3 = "hello everybody";

    cout << strg3 << endl;

    // copy
    strg1 = strg3;
    cout << strg1 << endl;

    strg2 = strg3; // 복사 하면서 생성
    cout << strg2 << endl;

    if (strg2.empty())
        cout << "strg2 is empty" << endl;
    else
        cout << "strg2 is not empty" << endl;

    // 기본 입출력
    string strg; // 빈 문자열 생성
    cout << "문자열을 입력하세요.: ";
    cin >> strg;
    cout << "입력한 문자열: " << strg << endl;

    // input buffer를 clean하기
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // 이 코드를 사용하기 위해서는 #include <limits> 가 필요합니다. -> visual stdio 사용자는 필요 없음
    // 이 코드는 입력 스트림 버퍼에 남아있는 모든 값을 읽어들입니다.
    // 그리고 streamsize 타입의 정적 변수인 numeric_limits<streamsize>::max()로 지정된 최대 값까지 입력을 무시합니다.
    // 마지막으로 줄바꿈 문자('\n')이 나올 때까지 입력 스트림에서 값을 무시합니다.

    // 즉, 이 코드는 입력 스트림 버퍼를 비우고, 다음 입력 값을 읽을 수 있도록 준비하는 역할을 합니다.
    // 이 코드를 사용하면 이전에 입력했던 값을 무시하고 다시 입력할 수 있습니다.

    // 한 줄 읽어 들이기
    cout << "한 줄을 입력하세요.: ";
    getline(cin, strg);
    cout << "입력한 문자열: " << strg << endl;

    // 한 줄 입력하기 until enter only
    while (true)
    {
        cout << "연속 한 줄을 입력: ";
        getline(cin, strg);

        if (strg.empty())
        {
            cout << "연속 한 줄 입력 종료." << endl;
            break;
        }

        cout << "입력한 문자열: " << strg << endl;
    }

    // 여러 줄 입력받기
    cout << "여러 줄을 입력하세요. (종료 때는 $ 입력): ";
    getline(cin, strg, '$');
    cout << "입력한 문자열: " << strg << endl;

    // 문자열 비교
    string strg4 = "Alpha Go";

    cout << "strg3 == strg4 : " << boolalpha << (strg3 == strg4) << endl;

    char A[10] = "Grace";

    cout << "A == strg4 : " << boolalpha << (A == strg4) << endl;

    cout << "\"Alpha Go\" == strg4 : " << boolalpha << ("Alpha Go" == strg4) << endl;

    string first, last;
    char init[10];

    // 입력받기
    cout << "First Name을 입력하세요.: ";
    cin >> first;

    cout << "Last Name을 입력하세요.: ";
    cin >> last;

    cout << "이니셜을 입력하세요.: ";
    cin >> init;

    // 첫 번째 형식으로 Full Name 출력
    cout << endl << "첫 번째 형식의 Full Name: " << first + " " + init + "." + " " + last << endl;

    // 두 번째  형식으로 Full Name 출력
    cout << "두 번째 형식의 Full Name: " << last + ", " + first + " " + init + "." << endl;

    return 0;
}