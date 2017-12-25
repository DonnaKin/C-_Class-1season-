#include <iostream>
using namespace std;
void CallByValue(int value){
	value = value + 1;
	cout << "Call By Value : 주소:\t\t" << &value;
}
void CallByPointer(int *pValue){
	*pValue = *pValue + 1;
	cout << "Call By Point : 주소:\t\t" << pValue;
}
void CallByReference(int& value){
	value = value + 1;
	cout << "Call By Reference : 주소:\t\t" << &value;
}
int main(){
	int value = 10;
	cout << "함수 호출 전 원본 값 : \t주소:" << &value << ",값" << value << endl;
	CallByValue(value);
	cout << ",값" << value << endl;
	CallByPointer(&value);
	cout << ",값" << value << endl;
	CallByReference(value);
	cout << ",값" << value << endl;
	return 0;
}