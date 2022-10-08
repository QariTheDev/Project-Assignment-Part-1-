#include <iostream>

using namespace std;

int main() {
    //Internet Package
    int hr, per_hr;
    char package;
    float bill;
    float billA = 0, billB = 0, billC = 0;
    bool pack_A = false; bool pack_B = false;

    cout << "\t\t\t\t\t\tInternet Packages\n\n";
    cout << "Package A\t\t\tFor $0.99 per month\t10 hours\t\tAdditional Hours are $2.00 per hour" << endl;
    cout << "Package B\t\t\tFor $14.25 per month\t20 hours\t\tAdditional Hours are $1.00 per hour" << endl;
    cout << "Package C\t\t\tFor $19.95 per month\tUnlimited Access" << endl;
    cout << "\nEnter Your Package\t";
    cin >> package;
    cout << "Enter your number of hours\t";
    cin >> hr;

    billA = (0.99) + ((hr - 10) * 2);
    billB = (14.95) + ((hr - 20) * 1);
    billC = (19.95);


    if (hr <= 744) {
        if (package == 'A' || package == 'a') {
            bill = (0.99) + ((hr - 10) * 2);
            pack_A = true;
        }
        else if (package == 'B' || package == 'b') {
            bill = (14.95) + ((hr - 20) * 1);
            pack_B = true;

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

    if (pack_A == true) {
        cout<< "You would have saved $" << billA - billB << " by purchasing Package B\n";
        cout<< "You would have saved $" << billA - billC << " by purchasing Package C\n";
    }
    if (pack_B == true) {
        cout << "You would have saved $" << billB - billC << " by purchasing Package C";
    }
    cout << "\nThe total amount due is $" << bill;

    return 0;
}