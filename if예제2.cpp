#include <iostream>
using namespace std;
int main(){
	char a;
	
	cout << "�����Է�" << endl;
	cin >> a;
	if (isalpha(a)){
		if (islower(a)){ //�ҹ���
			a = a - 32;
			cout << (char)a << endl;
		}
		else if (isupper(a)){ //�빮��
			a = a + 32;
			cout << (char)a << endl;
		}
	}
	else {//�Ѵ� �ƴҶ�
		cout << "�ٽ��Է�" << endl;
	}
	return 0;
}