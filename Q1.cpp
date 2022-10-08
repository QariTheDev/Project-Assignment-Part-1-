#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//quadratic formula
	int a, b, c;
	float x1, x2, disc;

	cout << "Enter the value of a\n";
	cin >> a;
	cout << "Enter the value of b\n";
	cin >> b;
	cout << "Enter the value of c\n";
	cin >> c;

	disc = pow(b, 2) - (4 * a * c);

	x1 = ((-b + sqrt(disc)) / (2 * a));
	x2 = ((-b - sqrt(disc)) / (2 * a));

	if (disc == 0) {
		cout << "The equation " << a << "x^2 + " << b << "x + " << c << "= 0 has a single (repeated) root\n";
	}
	else if (disc > 0) {
		cout << "The equation " << a << "x^2 + " << b << "x + " << c << "= 0 has 2 real roots\n";
	}
	else if (disc < 0) {
		cout << "The equation " << a << "x^2 + " << b << "x + " << c << "= 0 has 2 complex roots\n";
	}
	else
		cout << "Invalid Input\n";

	if (disc >= 0) {
		cout << "The roots of the equation " << a << "x^2 + " << b << "x + " << c << " = 0 are " << (x1) << " & " << x2 << endl;;
	}
	else {
		cout << "The roots of the equation " << a << "x^2 + " << b << "x + " << c << " = 0 are imaginary";
	}




	return 0;
}