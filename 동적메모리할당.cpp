#include <iostream>
using namespace std;
int main(){
	int i;
	int *pArray = 0;
	pArray = new int[10];

	for (i = 0; i < 10; i++){
		pArray[i] = 10 + i;
	}

	for (i = 0; i < 10; i++){
		cout << pArray[i] << ", ";
	}

	cout << "----> 첨자를 이용한 경우" << endl;

	for (i = 0; i < 10; i++){
		*(pArray + i) = 20 + i;
	}

	for (i = 0; i < 10; i++){
		cout << *(pArray + i) << ", ";
	}

	cout << "----> 포인터를 이용한 경우" << endl;


	for (i = 0; i < 10; i++){
		if (i % 2 == 0)
			cout << pArray[i] << " ";
		else
			cout << *(pArray + i) << " ";
	}

	delete[] pArray;

	return 0;
}