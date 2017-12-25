#include <iostream>
using namespace std;
int main() {
	int dan;

	for (;;) {
		cout << "무한 루프를 이용한 구구단 출력 프로그램입니다." << endl;
		cout << "0을 입력 하면 종료 합니다." << endl;
		cout << "출력할 단을 입력 하세요 : ";

		cin >> dan;
		while ((int)dan  >= 1 && (int)dan <= 19){
			if (dan == 0) {
				cout << "구구단 출력을 종료 합니다." << endl;
				break;
			}
			if ((int)dan < 1 && (int)dan > 19){
				cout << "다시입력" << endl;
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