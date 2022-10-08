#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Sound distance
    int num_of_sec, choice;

    cout << "Select One of the following (1,2,3,4)"<< endl<< endl;
    cout << "Carbon Dioxide\t\t\t258.0" << endl << "Air\t\t\t\t331.5" << endl << "Helium\t\t\t\t972.0" << endl << "Hydrogen\t\t\t1270.0\n";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter the number of seconds between 0 & 30\t";
            cin >> num_of_sec;
            if (num_of_sec >= 0 && num_of_sec <= 30) {
                float source_of_sound = 258.0 * num_of_sec;
                cout << "\nThe source of sound in Carbon Dioxide was detected from "<< float(source_of_sound) << " m";
            }
            else {
                cout << "Invalid time range";
            }
            break;

        case 2:
            cout << "Enter the number of seconds between 0 & 30\t";
            cin >> num_of_sec;
            if (num_of_sec >= 0 && num_of_sec <= 30) {
                float source_of_sound = 331.5 * num_of_sec;
                cout << "\nThe source of sound in Air was detected from " << float(source_of_sound) << " m";
            }
            else {
                cout << "Invalid time range";
            }
            break;

        case 3:
            cout << "Enter the number of seconds between 0 & 30\t";
            cin >> num_of_sec;
            if (num_of_sec >= 0 && num_of_sec <= 30) {
                float source_of_sound = 972.0 * num_of_sec;
                cout << "\nThe source of sound in Helium was detected from " << float(source_of_sound) << " m";
            }
            else {
                cout << "Invalid time range";
            }
            break;

        case 4:
            cout << "Enter the number of seconds between 0 & 30\t";
            cin >> num_of_sec;
            if (num_of_sec >= 0 && num_of_sec <= 30) {
                float source_of_sound = 1270.0 * num_of_sec;
                cout << "\nThe source of sound in Hydrogen was detected from " << float(source_of_sound) << " m";
            }
            else {
                cout << "Invalid time range";
            }
            break;

        default:
            cout << "Invalid Input";
            break;
    }

    return 0;
}