#include <iostream>
using namespace std;
int main(){
	for (int i = 1; i <= 100; i++){
		int count = 0;
		for (int j = 1; j <= i/2; j++)
		if (i%j == 0)count++;//���
		if (count == 1) cout << i << endl;
	}
	return 0;
}