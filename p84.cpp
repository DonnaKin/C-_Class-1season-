#include <iostream>

using namespace std;

void PlusOne(int & value){
	value = value + 1;

	cout << "PlusOne 함수 : 참조형 value = " << value << endl;
}

int main() {
//	int nValue;
//	int& refValue = nValue;
//	cout << &nValue << endl;
//	cout << &refValue << endl;
//	nValue = 10;
//	cout << refValue << endl;
	int nValue = 10;
	cout << "1) nValue = " << nValue << endl;

	PlusOne(nValue);

	cout << "2)nValue = " << nValue << endl;
	return 0;
}