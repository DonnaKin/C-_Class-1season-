#include <iostream>
using namespace std;
//ÇÔ¼ö ÇÁ·ÎÅäÅ¸ÀÔ ¼±¾ð
int myClaculator(int type, int value1, int value2);

int myClaculator(int type, int value1, int value2) {
	int result = 0;

	switch (type)
	{
	case 0://µ¡¼À
		result = value1 + value2; break;
	case 1: //»¬¼À
		result = value1 - value2; break;
	case 2: //°ö¼À
		result = value1 * value2; break;
	case 3: //³ª´°¼À
		if (value2 == 0){
			cout << "0À¸·Î ³ª´­ ¼ö ¾ø½À´Ï´Ù." << endl; return -3;
		}
		else{
			result = value1 / value2; break;
		}
	}
	return result;
}

int main() {
	int value = 0;

	value = myClaculator(0, 10, 20);
	cout << "µ¡¼À : " << value << endl;

	value = myClaculator(1, 10, 20);
	cout << "»¬¼À : " << value << endl;

	value = myClaculator(2, 5, 20);
	cout << "°ö¼À : " << value << endl;

	value = myClaculator(3, 20, 0);
	cout << "³ª´°¼À : " << value << endl;

	return 0;
}