#include <iostream>
using namespace std;
int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	const int *p1=a;
	cout << p1 << endl;
	p1++;
	cout << p1 << endl;
	//*p1 = 0; ���� �ٲ��ִ� ���� �����߻�
	a[1] = 0;
	cout << *p1 << endl;

	int * const p2 = a;
	cout << p2 << endl;
	//p2++; �ּҰ� ���� �����߻� 
	cout << *p2 << endl;
	*p2 = 0;
	cout << *p2 << endl;

	const int * const p3 = a;
	cout << p3 << endl;
	//p3++; �ּҰ� ���� �����߻�
	cout << *p3 << endl;
	//*p3 = 0; �� ���� �����߻�

	return 0;
}