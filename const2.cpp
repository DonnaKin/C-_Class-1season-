#include <iostream>
using namespace std;
int main(){
	const char *p1 = "abcd"; //������ �� �ٲ����� �޸𸮰� �ٸ� ������ ����Ǿ� ������ �ٲ�� ó�� ����
	cout << p1 << endl;
	p1++;
	cout << p1 << endl;
	//*p1 = 'k'; //���� ���� �����߻�
	p1--;
	cout << p1 << endl;
	p1 = "kbcd";
	cout << p1 << endl; // �Ǵٸ� p1���� ���� �ּҰ� �޶���

	char * const p2 = "abcd"; //������ �¾� ������ ������ �ȳ����� ����뿡���� �߻�
	cout << p2 << endl;
	//p2++; 
	cout << p2 << endl;
	//*p2 = 'k'; //�����߻�(����뿡��) �ּҸ� ���ȭ ��Ų������ ������ �ٲٴ� �͵� �������� ������ ����뿡�� �߻�
	char *p3 = p2;
	//*p3 = 'k'; //����뿡�� �߻� / �̹� ���ڿ��� ������ const�ؼ� ���� �� ����
	//p2--;
	cout << p2 << endl;
	//p2 = "kbcd";
	cout << p2 << endl;

	const char * const p4 = "abcd";

	return 0;
}