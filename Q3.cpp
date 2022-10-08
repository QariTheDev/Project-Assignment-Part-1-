#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	//atm withdrawal
	int available_money,daily_withdraw_limit,withdrawal_amount, no_of_500, no_of_1000, no_of_5000;

	cout << "Enter the money available in your account\n";
	cin >> available_money;
	cout << "Enter your daily withdraw limit\n";
	cin >> daily_withdraw_limit;
	cout << "Enter the amount you want to withdraw (multiple of 500)\n";
	cin >> withdrawal_amount;

	no_of_500 = ((withdrawal_amount % 5000) % 1000) / 500;
	no_of_1000 = (withdrawal_amount % 5000) / 1000;
	no_of_5000 = withdrawal_amount / 5000;

	if (available_money < 500 || withdrawal_amount > daily_withdraw_limit || withdrawal_amount > available_money || withdrawal_amount % 500 !=0 ) {
		cout << "Sorry! We faced an error!!!, Plz check and enter the credentials again\n ";
	}
	else {
		cout << "You will be given " << no_of_500 << " notes of 500" << endl << setw(19) << no_of_1000 << " notes of 1000" << endl << setw(19) << no_of_5000 << " notes of 5000";
	}

	return 0;
}