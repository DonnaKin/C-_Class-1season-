#include <iostream>
#define person 2
using namespace std;
int main() {
	char name[person][10];
	char hakbun[person][5];
	int kor[person], math[person], jun[person], eng[person], score[person] /*person*/;
	char d[person];
	double avg[person];
	//	cout << "�� ���� �Է��Ͻðڽ��ϱ�?";
	//	cin >> person;
	for (int i = 0; i < person; i++) {
		cout << "�й��� �Է��Ͻÿ� : ";
		cin >> hakbun[i];
		cout << "�̸��� �Է��Ͻÿ� : ";
		cin >> name[i];
		cout << "���� ���� �Է� : ";
		cin >> kor[i];
		if (kor[i] >= 0 && kor[i] <= 100) {
			score[i] += kor[i];
		}
		else {
			do {
				cout << "���� ���� �ٽ� �Է� : ";
				cin >> kor[i];
				if (kor[i] >= 0 && kor[i] <= 100) {
					score[i] += kor[i];
				}
			} while (kor[i] < 0 || kor[i] > 100);
		}
		//�������� ��
		cout << "���� ���� �Է� : ";
		cin >> math[i];
		if (math[i] >= 0 && math[i] <= 100) {
			score[i] += math[i];
		}
		else {
			do {
				cout << "���� ���� �ٽ� �Է� : ";
				cin >> math[i];
				if (math[i] >= 0 && math[i] <= 100) {
					score[i] += math[i];
				}
			} while (math[i] < 0 || math[i] > 100);
		}
		//�������� ��
		cout << "���� ���� �Է� : ";
		cin >> jun[i];
		if (jun[i] >= 0 && jun[i] <= 100) {
			score[i] += jun[i];
		}
		else {
			do {
				cout << "���� ���� �ٽ� �Է� : ";
				cin >> jun[i];
				if (jun[i] >= 0 && jun[i] <= 100) {
					score[i] += jun[i];
				}
			} while (jun[i] < 0 || jun[i] > 100);
		}
		//�������� ��
		cout << "���� ���� �Է� : ";
		cin >> eng[i];
		if (eng[i] >= 0 && eng[i] <= 100) {
			score[i] += eng[i];
		}
		else {
			do {
				cout << "���� ���� �ٽ� �Է� : ";
				cin >> eng[i];
				if (eng[i] >= 0 && eng[i] <= 100) {
					score[i] += eng[i];
				}
			} while (eng[i] < 0 || eng[i] > 100);
		}
		score[i] = kor[i] + math[i] + jun[i] + eng[i];
		avg[i] = (double)score[i] / 4.0;
		switch ((int)avg[i] / 10) {
		case 10:
		case 9: d = 'A'; break;
		case 8: d = 'B'; break;
		case 7: d = 'C'; break;
		case 6: d = 'D'; break;
		default: d = 'F'; break;
		}
		cout << endl;
	}
	printf("  %5s   %5s   %6s  %6s %6s   %6s   %6s %6s   %4s\n", "�й�", "�̸�", "����", "����", "����", "����", "�հ�", "���", "���");
	cout << "========================================================================" << endl;
	for (int k = 0; k < person; k++) {
		printf("  %5s   %5s %6d  %6d %6d   %6d   %6d   %6.2lf %4c\n", hakbun[k], name[k], kor[k], math[k], jun[k], eng[k], score[k], avg[k], d[k]);
	}
	//�������� ��

}