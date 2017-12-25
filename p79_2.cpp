#include <iostream>
#include <time.h>

using namespace std;

int main(){
	int random[10];
	srand((unsigned)time(0));
	int value = 0;
	//for (int i = 0; i < 10; i++){
	//	value = 50 + (rand() % 50); //50보다 크거나 같고 100보다 작게
	//	random[i] = value;
		//cout << i << " : 난수값 : " << value << endl;
	//}
	for (int j = 0; j < 10; j++){
		if (random[j] == random[++j]){
			random[++j] = value;
		}
	}

	for (int j = 0; j < 10; j++){
		cout << j << "난수 값 : " << random[j] << endl;
	}
}