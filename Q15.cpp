#include <iostream>
using namespace std;

int main() {
	//Palindrome num
	int num, temp, rem, rev = 0;

	cout << "Enter a number\t";
	cin >> num;

	temp = num;

	while (temp > 0) {
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp /= 10;
	}
	if (num == rev) {
		cout << "It is a palindrome number\t" << num <<" = "<< rev;
	}
	else {
		cout << "It is not a palindrome number\t" << num << " = " << rev; ;
	}

	return 0;
}