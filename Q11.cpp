#include<iostream>
using namespace std;

int main()
{	
	//pages
	int amount_of_pages, thousand, five_hundred, hundreds;

	cout << "Enter the amount of pages\t ";
	cin >> amount_of_pages;
	cout << "You can buy " << amount_of_pages << " pages for \$" << amount_of_pages * 0.1 << " Or \n";

	if (amount_of_pages % 1000 != amount_of_pages) {

		thousand = amount_of_pages / 1000;
		five_hundred = amount_of_pages / 500;

		if (amount_of_pages % 1000 == 0) {
			cout << "1. It will be cost effective to buy " << thousand << "000 pages for \$" << thousand * 1000 * 0.03;
		}
		else {
			cout << "1. It will be cost effective to buy " << thousand + 1 << "000 pages for \$" << (thousand + 1) * 1000 * 0.03;
		}
		if (amount_of_pages % 500 == 0) {
			cout << "\n2. It will be cost effective to buy " << five_hundred * 500 << " pages for \$" << five_hundred * 500 * 0.04;
		}
		else {
			cout << "\n2. It will be cost effective to buy " << (five_hundred + 1) * 500 << " pages for \$" << (five_hundred + 1) * 500 * 0.04;
		}
	}
	else if (amount_of_pages > 500) {
		cout << "1. It will be cost effective to buy 1000 pages for \$" << 1000 * 0.03;

		hundreds = amount_of_pages / 100;

		if (amount_of_pages % 100== 0) {
			cout << "\n2. It will be cost effective to buy " << hundreds * 100 << " pages for \$" << hundreds * 100 * 0.055;
		}
		else {
			cout << "\n2. It will be cost effective to buy " << (hundreds + 1) * 100 << " pages for \$" << (hundreds + 1) * 100 * 0.055;
		}
	}
	else if (amount_of_pages > 100) {
		cout << "1. It will be cost effective to buy 500 pages for \$" << 500 * 0.04;

		hundreds = amount_of_pages / 100;

		if (amount_of_pages % 100 == 0) {
			cout << "\n2. It will be cost effective to buy " << hundreds * 100 << " pages for \$" << hundreds * 100 * 0.055;
		}
		else {
			cout << "\n2. It will be cost effective to buy " << (hundreds + 1) * 100 << " pages for \$" << (hundreds + 1) * 100 * 0.055;
		}
	}
	else {
		cout << "1. It will be cost effective to buy 100 pages for \$" << 100 * 0.055;
	}
	return 0;
}