#include <iostream>
using namespace std;
int main(){
	char a;
	cout <<"알파벳 입력"<<endl ;
	cin >> a;
	if (isalpha(a)){
		if (isupper(a)) a = a + 32;
		switch (a)
		{
		case 'a': cout << "America" << endl;
		case 'b': cout << "Brazil" << endl;
		case 'c': cout << "Canada" << endl;
		case 'd': cout << "Denmark" << endl;
		case 'e': cout << "England" << endl;
		default: cout << "Korea" << endl;  break;
		}
	}
	else{
		cout << "다시입력" << endl;
	}

	return 0;
}