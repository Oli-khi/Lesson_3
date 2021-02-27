
#include "Lesson_3.h"

int main() {

	//		1

	float result = a * (b + ((float)c / d));

	//		2

	int i;
	cout << (i >= 21) ? (2 * (i - 21)) : (21 - i);

	//		3 (Lesson_3.h)

	//		4

	int arr[3][3][3];
	int* pArr = arr[0][0];
	cout << *(pArr + 13) << endl;
			//		OR
	int* pArr2 = &arr[1][1][1];
	cout << *pArr2 << endl;
	
}