#include <iostream>
using namespace std;
int main(){
	const char *p1 = "abcd"; //내용을 못 바꾸지만 메모리가 다른 곳으로 연결되어 눈에는 바뀐것 처럼 보임
	cout << p1 << endl;
	p1++;
	cout << p1 << endl;
	//*p1 = 'k'; //내용 변경 오류발생
	p1--;
	cout << p1 << endl;
	p1 = "kbcd";
	cout << p1 << endl; // 또다른 p1방이 생겨 주소가 달라짐

	char * const p2 = "abcd"; //문법은 맞아 컴파일 에러는 안나지만 디버깅에러가 발생
	cout << p2 << endl;
	//p2++; 
	cout << p2 << endl;
	//*p2 = 'k'; //오류발생(디버깅에러) 주소를 상수화 시킨다음에 내용을 바꾸는 것도 문법에는 맞지만 디버깅에러 발생
	char *p3 = p2;
	//*p3 = 'k'; //디버깅에러 발생 / 이미 문자열의 공간을 const해서 변할 수 없음
	//p2--;
	cout << p2 << endl;
	//p2 = "kbcd";
	cout << p2 << endl;

	const char * const p4 = "abcd";

	return 0;
}