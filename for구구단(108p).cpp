#include <iostream>
using namespace std;
int main() {
	int dan;

	for (;;) {
		cout << "���� ������ �̿��� ������ ��� ���α׷��Դϴ�." << endl;
		cout << "0�� �Է� �ϸ� ���� �մϴ�." << endl;
		cout << "����� ���� �Է� �ϼ��� : ";

		cin >> dan;
		while ((int)dan  >= 1 && (int)dan <= 19){
			if (dan == 0) {
				cout << "������ ����� ���� �մϴ�." << endl;
				break;
			}
			if ((int)dan < 1 && (int)dan > 19){
				cout << "�ٽ��Է�" << endl;
				continue;
			}
			for (int i = 1; i <= 9; i++) {
				cout << "     " << dan << " * " << i << " = " << (dan*i) << endl;
			}
			break;
		}
	}
	return 0;
}