#include <iostream>
using namespace std;
int main(){
	int money,sum=0;
	cout << "돈을 입력하세요";
	cin >> money;

	int cnt = 0;
	int mon = money;

	int unit = 50000;
	bool flg = 1;
	while (1){
		cnt = mon / unit;
		sum += cnt;
		mon = mon%unit;
		if (cnt != 0) cout << unit << "원권 : " << cnt << "장" << endl;
		if (mon == 0)break;
		if (flg)unit = unit / 5;
		else unit = unit / 2;
		//flg ^= 1;//flg=flg^1;
		flg = !flg;
	}
	cout << "총 : " << sum << "장" << endl;
	return 0;
}