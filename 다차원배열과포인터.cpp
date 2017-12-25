#include <iostream>
using namespace std;
int main() {
	/*
	int nArrays[4][3] = {
	{1,2,3},
	{4,5,6},
	{7,8,9},
	{10,11,12}
	};
	int colsize = sizeof(nArrays[0]) / sizeof(int); //행
	int rowsize = sizeof(nArrays) / sizeof(nArrays[0]); //열
	int* pArrays = &nArrays[0][0];
	//int **p = nArrays; 이론적으론 두 번 가야지 nArrays방을 만날 수 있다

	for (int i = 0; i < rowsize; i++) {
	for (int j = 0; j < colsize; j++) {
	cout << nArrays[i][j] << " ";
	}
	cout << endl;
	}
	cout << endl;
	for (int i = 0; i < rowsize; i++) {
	for (int j = 0; j < colsize; j++) {
	cout << *(pArrays + (i * colsize + j)) << " ";
	}
	cout << endl;
	}
	cout << endl;
	cout << nArrays << endl;
	cout << nArrays[0] << endl;
	cout << &nArrays[0][0] << endl;

	cout << *pArrays << " " << *(pArrays + 1) << " " << *(pArrays + 2) << endl;
	cout << *(pArrays+3) << " " << *(pArrays + 4) << " " << *(pArrays + 5) << endl;
	*/
	int nArrays[2][4][3] = {
		{
			{ 1, 2, 3 },
			{ 4, 5, 6 },
			{ 7, 8, 9 },
			{ 10, 11, 12 }
		},
		{
			{ 13, 14, 15 },
			{ 16, 17, 18 },
			{ 19, 20, 21 },
			{ 22, 23, 24 }
		}
	};
	int *pArrays = nArrays[0][0];

	int size = sizeof(nArrays) / sizeof(nArrays[0]);
	int size1 = sizeof(nArrays[0]) / sizeof(nArrays[0][0]);
	int size2 = sizeof(nArrays[0][0]) / sizeof(int);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size1; j++) {
			for (int k = 0; k < size2; k++) {
				cout << nArrays[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << "============================" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size1; j++) {
			for (int k = 0; k < size2; k++) {
				cout << *(pArrays + (i * 4 * 3 + j * 3 + k)) << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}