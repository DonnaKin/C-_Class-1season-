//������ �Է¹޾Ƽ� ���� ���
#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout << "������ ����� ������ �Է��Ͻÿ�" << endl;
	cin >> a;
	
	if (a < 0){
		b = a*-1;
		cout << a << "�� ���� : " << b << endl;
	}

	//���� ���� ��� : cout<<abs(a)<<endl;

	return 0;
}