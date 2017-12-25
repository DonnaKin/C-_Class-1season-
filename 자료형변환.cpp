#include <iostream>
using namespace std;

int main(){
	int in = 2100000000;
	short sh = 20;
	char ch = 'a';
	long lo = 30;
	float fl = 3.4f;//f를 써주지 않으면 double로 인식하기때문에 경고메세지가 뜸.(정수는 int로 인식)
	double dou = 5.6;
	//자동 형변환
	sh = ch;
	in = sh;
	lo = in;
	fl = (float)lo;//데이터 손실 위험
	dou = fl;
	//강제 형변환
	fl = (float)dou;//데이터 손실 위험
	lo = (long)fl;//데이터 손실 위험
	in = lo;
	sh = in;
	cout << sh << endl;
	ch = (char)sh;//데이터 손실 위험

	return 0;
}