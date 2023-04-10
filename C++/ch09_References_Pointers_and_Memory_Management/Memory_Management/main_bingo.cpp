#include <iostream>
using namespace std;
char* ShiftLeftString( char* msg, int len )
{
	// ��� ���ڿ��� ������ ������ �Ҵ��Ѵ�.
	char* copy_msg = new char[ len + 1 ];
	// ���� ���ڿ��� ù��° ���ڸ� ���� �����Ѵ�.
	for ( int i = 0; i < len - 1; ++i )
	{
		copy_msg[i] = msg[ i + 1 ];
	}
	// ���� ���ڿ��� ù��° ���ڸ� ���� �ڿ� �����Ѵ�.
	copy_msg[ len - 1] = msg[ 0 ];
	copy_msg[ len ] = NULL;
	return copy_msg;
}
int main ()
{
	char message[] = "BINGO JJANG!!!";
	cout << message << endl;
	cout << "sizeof(message): " << sizeof(message) << endl; //15
	cout << "strlen(message): " << strlen(message) << endl; //14
	int len = strlen(message);
	//char orig[15];
	char* orig = new char[len+1];
	cout << "sizeof(orig) : " << sizeof(orig) << endl;

	strcpy_s(orig, len+1, message);


	cout << message << endl;
	char* copy;
	for (int i=0; i< sizeof(message)-1; i++)
	{
		copy = ShiftLeftString(orig, 14 );
		cout << copy << endl;
		strcpy_s(orig, len+1, copy);
		delete[] copy; copy = NULL;
	}
	delete[] orig; orig = NULL;
	return 0;
}
/*
BINGO JJANG!!!
INGO JJANG!!!B
NGO JJANG!!!BI
GO JJANG!!!BIN
O JJANG!!!BING
 JJANG!!!BINGO
JJANG!!!BINGO
JANG!!!BINGO J
ANG!!!BINGO JJ
NG!!!BINGO JJA
G!!!BINGO JJAN
!!!BINGO JJANG
!!BINGO JJANG!
!BINGO JJANG!!
BINGO JJANG!!!
����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .
*/