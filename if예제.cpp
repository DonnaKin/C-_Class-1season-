//정수를 입력받아서 절댓값 출력
#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout << "절댓값을 출력할 정수를 입력하시오" << endl;
	cin >> a;
	
	if (a < 0){
		b = a*-1;
		cout << a << "의 절댓값 : " << b << endl;
	}

	//가장 좋은 방법 : cout<<abs(a)<<endl;

	return 0;
}