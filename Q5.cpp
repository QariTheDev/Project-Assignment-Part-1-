#include<iostream>
using namespace std;

int main() {
	//alphabets
	int count=1;
	char a, b, c, d, e, f, g;

	cout << "Input 7 characters: \n";
	cin >> a >> b >> c >> d >> e >> f >> g;

	if (a == b) {
		count++;
	}
	if (a == c) {
		count++;
	}
	if (a == c) {
		count++;
	}
	if (a == d) {
		count++;
	}
	if (a == e) {
		count++;
	}
	if (a == f) {
		count++;
	}
	if (a == g) {
		count++;
	}

	cout << count << " " << a << " ";

	count = 1;

	if (b != a) {
		if (b == c) {
			count++;
		}
		if (b == d) {
			count++;
		}
		if (b == e) {
			count++;
		}
		if (b == f) {
			count++;
		}
		if (b == g) {
			count++;
		}
		cout << count << " " << b << " ";
	}

	count = 1;

	if (c != a && c != b) {
		if (c == d) {
			count++;
		}
		if (c == e) {
			count++;
		}
		if (c == f) {
			count++;
		}
		if (c == g) {
			count++;
		}
		cout << count << " " << c << " ";
	}

	count = 1;

	if (d != a && d != b && d != c) {
		if (d == e) {
			count++;
		}
		if (d == f) {
			count++;
		}
		if (d == g) {
			count++;
		}
		cout << count << " " << d << " ";
	}

	count = 1;

	if (e != a && e != b && e != c && e != d) {
		if (e == f) {
			count++;
		}
		if (e == g) {
			count++;
		}
		cout << count << " " << e << " ";
	}

	count = 1;

	if (f != a && f != b && f != c && f != d && f != e) {
		if (f == g) {
			count++;
		}
		cout << count << " " << f << " ";
	}

	count = 1;

	if (g != a && g != b && g != c && g != d && g != e && g != f) {
		cout << count << " " << g << " ";
	}

	return 0;
}