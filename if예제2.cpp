#include <iostream>
using namespace std;
int main(){
	char a;
	
	cout << "문자입력" << endl;
	cin >> a;
	if (isalpha(a)){
		if (islower(a)){ //소문자
			a = a - 32;
			cout << (char)a << endl;
		}
		else if (isupper(a)){ //대문자
			a = a + 32;
			cout << (char)a << endl;
		}
	}
	else {//둘다 아닐때
		cout << "다시입력" << endl;
	}
	return 0;
}