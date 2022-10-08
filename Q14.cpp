#include<iostream>
using namespace std;

int main()
{	//Dual Prime Numbers
	int count1 = 4, count2 = 2, N, num1, num2;
	bool num1Prime = false, num2Prime = false;

	cout << "Enter number to iterate up to: ";
	cin >> N;

	cout << "Dual Prime Numbers\n(2 , 3)";

	while (count1 <= N) {

		num1 = count1;
		num2 = count1 - 2;

		if (num1 % num1 == 0 && num1 % 1 == 0) {
			num1Prime = true;
		}
		while (count2 < 10) {
			if (num1 == 2 || num1 == 3 || num1 == 5 || num1 == 7) {
				break;
			}
			if (num1 % count2 == 0) {
				num1Prime = false;
				break;
			}
			count2++;
		}
		count2 = 2;
		if (num2 % num2 == 0 && num2 % 1 == 0) {
			num2Prime = true;
		}
		while (count2 < 10) {
			if (num2 == 2 || num2 == 3 || num2 == 5 || num2 == 7) {
				break;
			}
			if (num2 % count2 == 0) {
				num2Prime = false;
				break;
			}
			count2++;
		}
		if (num1Prime == true && num2Prime == true) {
			cout << "(" << num2 << " , " << num1 << ")";
		}
		count1++;
	}

	return 0;
}