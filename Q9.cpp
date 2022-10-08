#include <iostream>

using namespace std;

int main() {
    //Internet Package
    int hr, per_hr;
    char package;
    float bill;

    cout << "\t\t\t\t\t\tInternet Packages\n\n";
    cout << "Package A\t\t\tFor $0.99 per month\t10 hours\t\tAdditional Hours are $2.00 per hour" << endl;
    cout << "Package B\t\t\tFor $14.25 per month\t20 hours\t\tAdditional Hours are $1.00 per hour" << endl;
    cout << "Package C\t\t\tFor $19.95 per month\tUnlimited Access" << endl;
    cout << "\nEnter Your Package\t";
    cin >> package;
    cout << "Enter your number of hours\t";
    cin >> hr;

    if (hr <= 744) {
        if (package == 'A' || package == 'a') {
            bill = (0.99) + ((hr - 10) * 2);
        }
        else if (package == 'B' || package == 'b') {
            bill = (14.95) + ((hr - 20) * 1);
        }
        else if (package == 'C' || package == 'c') {
            bill = (19.95);
        }
        else {
            cout << "Invalid Input";
        }
    }
    else {
        cout << "Invalid Input";
    }

    cout << "The total amount due is $" << bill;

    return 0;
}