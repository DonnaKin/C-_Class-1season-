#include <iostream>
using namespace std;
int main(){
	int kor, math, jun, eng, score = 0, person;
	char d;
	double avg;
	char name[10];
	char hakbun[6];
	cout << "�� ���� �Է��Ͻðڽ��ϱ�?";
	cin >> person;
	for (int i = 0; i < person; i++){
		cout << "�̸��� �Է��Ͻÿ� : ";
		cin >> name;
		cout << "�й��� �Է��Ͻÿ� : ";
		cin >> hakbun;
		cout << "���� ���� �Է� : ";
		cin >> kor;
		if (kor >= 0 && kor <= 100) {
			score += kor;
		}
		else{
			do{
				cout << "���� ���� �ٽ� �Է� : ";
				cin >> kor;
				if (kor >= 0 && kor <= 100) {
					score += kor;
				}
			} while (kor < 0 || kor > 100);
		}
		//�������� ��
		cout << "���� ���� �Է� : ";
		cin >> math;
		if (math >= 0 && math <= 100) {
			score += math;
		}
		else{
			do {
				cout << "���� ���� �ٽ� �Է� : ";
				cin >> math;
				if (math >= 0 && math <= 100) {
					score += math;
				}
			} while (math < 0 || math > 100);
		}
		//�������� ��
		cout << "���� ���� �Է� : ";
		cin >> jun;
		if (jun >= 0 && jun <= 100) {
			score += jun;
		}
		else{
			do {
				cout << "���� ���� �ٽ� �Է� : ";
				cin >> jun;
				if (jun >= 0 && jun <= 100) {
					score += jun;
				}
			} while (jun < 0 || jun > 100);
		}
		//�������� ��
		cout << "���� ���� �Է� : ";
		cin >> eng;
		if (eng >= 0 && eng <= 100) {
			score += eng;
		}
		else{
			do {
				cout << "���� ���� �ٽ� �Է� : ";
				cin >> eng;
				if (eng >= 0 && eng <= 100) {
					score += eng;
				}
			} while (eng < 0 || eng > 100);
		}
		avg = (double)score / 4.0;
		switch ((int)avg / 10){
		case 10:
		case 9: d = 'A'; break;
		case 8: d = 'B'; break;
		case 7: d = 'C'; break;
		case 6: d = 'D'; break;
		default: d = 'F'; break;
		}
		cout << "�̸� " << name << " �й�  " << hakbun;
		cout << kor << "  " << math << " " << jun << " " << eng << " " << score;
		printf(" %.2f", avg);
		cout << " ���" << d << endl;
		score = 0, avg = 0;
	}
	//�������� ��

}