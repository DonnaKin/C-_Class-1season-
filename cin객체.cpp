#include <iostream>
using namespace std;
int main(){
	//정수 출력
	int value;
	cout << "정수입력 : ";
	cin >> value;
	cout << "정수출력 : " << value << endl;
	//문자열 출력
	char buffer[32];
	cout << "문자열 입력 : ";
	cin >> buffer;
	cout << "문자열 출력 : " << buffer << endl;
	 
	return 0;
}