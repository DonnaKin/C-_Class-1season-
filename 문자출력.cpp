#include <iostream>
using namespace std;
int main(){
	char* pMessage = "welcome to korea";

	//cout << pMessage << endl;

	//cout << *pMessage << endl;
	cout << *(pMessage + 11) << endl;
	cout << *(pMessage + 12) << endl;
	cout << *(pMessage + 13) << endl;
	cout << *(pMessage + 14) << endl;
	cout << *(pMessage + 15) << endl;

	return 0;
}