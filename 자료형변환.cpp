#include <iostream>
using namespace std;

int main(){
	int in = 2100000000;
	short sh = 20;
	char ch = 'a';
	long lo = 30;
	float fl = 3.4f;//f�� ������ ������ double�� �ν��ϱ⶧���� ���޼����� ��.(������ int�� �ν�)
	double dou = 5.6;
	//�ڵ� ����ȯ
	sh = ch;
	in = sh;
	lo = in;
	fl = (float)lo;//������ �ս� ����
	dou = fl;
	//���� ����ȯ
	fl = (float)dou;//������ �ս� ����
	lo = (long)fl;//������ �ս� ����
	in = lo;
	sh = in;
	cout << sh << endl;
	ch = (char)sh;//������ �ս� ����

	return 0;
}