#include <iostream>
using namespace std;
int main(){
	char a;
	cout <<"���ĺ� �Է�"<<endl ;
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
		cout << "�ٽ��Է�" << endl;
	}

	return 0;
}