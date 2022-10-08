#include <iostream>

using namespace std;

int main() {
    //next date
    int date, month, yr;
    bool leap_yr = false, valid_date = true;

    cout << "Enter the date, month and yr\t";
    cin >> date >> month >> yr;

    //checking leap year
    if (yr % 400 == 0) {
        leap_yr = true;
    }
    else if (yr % 100 == 0) {
        leap_yr = false;
    }
    else if (yr % 4 == 0) {
        leap_yr = true;
    }
    else {
        leap_yr = false;
    }

    //REST OF THE PROGRAM
    if (yr >= 1900 && yr <= 2500) {
        if (month >= 1 && month <= 12) {
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) {
                if (date == 31) {
                    month += 1;
                    date = 1;
                }
                else if (date >= 1 && date < 31) {
                    date += 1;
                }
                else {
                    valid_date = false;
                }
            }
            else if (month == 4 || month == 6 || month == 9 || month == 11) {
                if (date == 30) {
                    month += 1;
                    date = 1;
                }
                else if (date >= 1 && date < 30) {
                    date += 1;
                }
                else {
                    valid_date = false;
                }
            }
            else if (month == 12) {
                if (date == 31) {
                    month = 1;
                    date = 1;
                    yr += 1;
                }
                else if (date >= 1 && date < 31) {
                    date += 1;
                }
                else {
                    valid_date = false;
                }
            }
            else if (month == 2) {
                if (leap_yr == false) {
                    if (date == 28) {
                        month += 1;
                        date = 1;
                    }
                    else if (date >= 1 && date < 28) {
                        date += 1;
                    }
                    else {
                        valid_date = false;
                    }
                }
                else {
                    if (date == 29) {
                        month += 1;
                        date = 1;
                    }
                    else if (date >= 1 && date < 29) {
                        date += 1;
                    }
                    else {
                        valid_date = false;
                    }
                }
            }
            else {
                date += 1;
            }

        }


    }

    if (valid_date == true)
        cout << date << " / " << month << " / " << yr;
    else {
        cout << "Invalid Input";
    }


    return 0;
}