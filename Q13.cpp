#include <iostream>
using namespace std;

int main() {
	//strong numbers
	int num, temp ,sum = 0, rem, count = 1 ,fact = 1;

	cout << "Enter the number\t";
	cin >> num;

	temp = num;

	while (temp > 0) {
		rem = temp % 10;
		count = rem;
		
		fact = 1;
		while (count > 0) {
			fact = fact * count;
			count--;
		}
		sum = sum + fact;
		temp /= 10;
	}
	cout << "\nThe Sum of the Factorials of " << num << " is = " << sum << "\n\n";
	if (num == sum)
	{
		cout << num << " is a Strong Number";
	}
	else
	{
		cout << num << " is Not a Strong Number";
	}

	return 0;
}