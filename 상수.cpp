#include <iostream>
using namespace std;
#define f(x) x*x
#define MAX_COUNT 100

#define MAX(a,b) a>b? a:b

int main(){
	cout << MAX_COUNT << endl;

	//int nMAX = MAX(100, 200);

	cout << (MAX(100,200)) << endl;
	cout << f(2 + 3) << endl; //±×´ë·Î ³ª¿È
	return 0;
}