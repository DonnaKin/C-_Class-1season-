#include <iostream>
using namespace std;
int main(){
	char szMessage[2][20] = { "Hello arrary", "�ȳ��ϼ���" };
	cout << szMessage[0] << endl;
	cout << szMessage[1] << endl;
	char *p = szMessage[0];
	//char **p1 = szMessage;
	cout << p << endl;
	cout << "===================" << endl;
	cout << szMessage << endl;
	cout << &szMessage[0] << endl;
	cout << szMessage[0] << endl;
	cout << &szMessage[0][0] << endl;

	char a[2][3][10] = { { "������", "�󸶹�", "�����" }, { "��īŸ", "���Ͼ�", "�߾" } };
	cout << a[0][2] << endl;
	cout << a << endl;
	cout << a[0] << endl;
	cout << a[1] << endl;
	return 0;
}