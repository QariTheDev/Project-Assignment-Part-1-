#include <iostream>
#include <string>
using namespace std;

int main() {
	  //date to day
    int day, month, year, y, m, d, check, limit = 31;
    int iyear = 2020, imonth = 10, iday = 4;
    bool correct_year = false;
    cout << "Enter date: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    while (correct_year == false) {
        cin >> year;
        if (year >= 1900 && year <= 2500) {
            correct_year = true;
        }
        else {
            cout << "Year should be between 1900 and 2500. Try again: ";
        }
    }
    y = iyear;
    m = imonth;
    d = 4;
    if ((year <= iyear && month < imonth) || (year < iyear)) {

        while (y != year || m != month) {
            d = d - 7;
            if (d <= 0) {
                m = m - 1;
                if (m == 1) {
                    d = 31 + d;
                }
                else if (m == 2) {
                    if (y % 4 == 0) {
                        d = 29 + d;
                    }
                    else {
                        d = 28 + d;
                    }
                }
                else if (m == 3) {

                    d = 31 + d;
                }
                else if (m == 4) {

                    d = 30 + d;
                }
                else if (m == 5) {

                    d = 31 + d;
                }
                else if (m == 6) {

                    d = 30 + d;
                }
                else if (m == 7) {

                    d = 31 + d;
                }
                else if (m == 8) {
                    d = 31 + d;
                }
                else if (m == 9) {
                    d = 30 + d;
                }
                else if (m == 10) {
                    d = 31 + d;
                }
                else if (m == 11) {
                    d = 30 + d;
                }
                else if (m == 0) {
                    d = 31 + d;
                    y = y - 1;
                    m = 12;
                }
            }
        }
    }
    else if ((year >= iyear && month > imonth) || (year > iyear)) {
        while (y != year || m != month) {
            d = d + 7;
            if (d > limit) {
                m = m + 1;
                d = d - limit;
                if (m == 12) {
                    limit = 31;
                }
                else if (m == 2) {
                    if (y % 4 == 0) {
                        limit = 29;
                    }
                    else {
                        limit = 28;
                    }
                }
                else if (m == 3) {
                    limit = 31;
                }
                else if (m == 4) {

                    limit = 30;
                }
                else if (m == 5) {
                    limit = 31;
                }
                else if (m == 6) {
                    limit = 30;
                }
                else if (m == 7) {

                    limit = 31;
                }
                else if (m == 8) {
                    limit = 31;
                }
                else if (m == 9) {
                    limit = 30;
                }
                else if (m == 10) {
                    limit = 31;
                }
                else if (m == 11) {
                    limit = 30;
                }
                else if (m == 13) {
                    y = y + 1;
                    m = 1;
                    limit = 31;
                }
            }
        }
    }
    if (day < d) {
        while (d > day) {
            d = d - 7;
        }
        check = day - d;
    }
    else if (day > d) {
        while (d < day) {
            d = d + 7;
        }
        check = d - day;
    }
    else {
        check = 0;
    }

    switch (check) {
        case 0:
	        cout << "Sunday";
            break;

        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;
    
        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;
    }



    return 0;
}