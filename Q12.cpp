#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
    //sound level
    float sound_lvl, po = (20 * pow(10,-6)), p;
    char unit;

    cout << "Enter the sound pressure of the sound\t";
    cin >> p;
    cout << "Enter the unit (D for dB, P for Pa)\t";
    cin >> unit;

    sound_lvl = (20 * (log(p/(po)))) / 94;

    switch (unit) {
    case 'D':
		if (sound_lvl > 140) {
			cout << "Sound Level is higher than Threshold of Pain";
		}
		else if (sound_lvl > 125) {
			cout << "Sound Level is closest to Threshold of Pain";
		}
		else if (sound_lvl > 110) {
			cout << "Sound Level is closest to Possible Hearing Damage";
		}
		else if (sound_lvl > 95) {
			cout << "Sound Level is closest to Jack Hammer at 1 m";
		}
		else if (sound_lvl > 75) {
			cout << "Sound Level is closest to Traffic on Busy Roadway at 10 m";
		}
		else if (sound_lvl > 45) {
			cout << "Sound Level is closest to Normal Conversation";
		}
		else if (sound_lvl > 15) {
			cout << "Sound Level is closest to Calm Library";
		}
		else if (sound_lvl < -10) {
			cout << "Sound Level is closest to Light Leaf Rustling";
		}
		else {
			cout << "Sound Level is lower than Light Leaf Rustling";
		}
		break;

    case 'P':
        cout << sound_lvl;
		break;
    }
    


    return 0;
}