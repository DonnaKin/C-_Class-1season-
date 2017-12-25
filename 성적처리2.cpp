#include <iostream>
using namespace std;
int main(){
	int kor, math, jun, eng, score = 0, person;
	char d;
	double avg;
	char name[10];
	char hakbun[6];
	cout << "몇 명을 입력하시겠습니까?";
	cin >> person;
	for (int i = 0; i < person; i++){
		cout << "이름을 입력하시오 : ";
		cin >> name;
		cout << "학번을 입력하시오 : ";
		cin >> hakbun;
		cout << "국어 점수 입력 : ";
		cin >> kor;
		if (kor >= 0 && kor <= 100) {
			score += kor;
		}
		else{
			do{
				cout << "국어 점수 다시 입력 : ";
				cin >> kor;
				if (kor >= 0 && kor <= 100) {
					score += kor;
				}
			} while (kor < 0 || kor > 100);
		}
		//국어점수 끝
		cout << "수학 점수 입력 : ";
		cin >> math;
		if (math >= 0 && math <= 100) {
			score += math;
		}
		else{
			do {
				cout << "수학 점수 다시 입력 : ";
				cin >> math;
				if (math >= 0 && math <= 100) {
					score += math;
				}
			} while (math < 0 || math > 100);
		}
		//수학점수 끝
		cout << "전산 점수 입력 : ";
		cin >> jun;
		if (jun >= 0 && jun <= 100) {
			score += jun;
		}
		else{
			do {
				cout << "전산 점수 다시 입력 : ";
				cin >> jun;
				if (jun >= 0 && jun <= 100) {
					score += jun;
				}
			} while (jun < 0 || jun > 100);
		}
		//전산점수 끝
		cout << "영어 점수 입력 : ";
		cin >> eng;
		if (eng >= 0 && eng <= 100) {
			score += eng;
		}
		else{
			do {
				cout << "영어 점수 다시 입력 : ";
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
		cout << "이름 " << name << " 학번  " << hakbun;
		cout << kor << "  " << math << " " << jun << " " << eng << " " << score;
		printf(" %.2f", avg);
		cout << " 등급" << d << endl;
		score = 0, avg = 0;
	}
	//영어점수 끝

}