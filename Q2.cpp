#include <iostream>
using namespace std;

int main() {
	//rock, paper, scissors
	int choice1, choice2;

	cout << "Enter your choices (rock = 1, paper = 2, scissors = 3)\t";
	cin >> choice1 >> choice2;

	if (choice1 == 1 && choice2 == 1) {
		cout << "DRAW!!!! \nPlayer-1 choice : Rock\nPlayer-2 choice: Rock \n";
	}
	else if (choice1 == 1 && choice2 == 2) {
		cout << "Player-2 WINS!!!! \nPlayer-1 choice : Rock\nPlayer-2 choice: Paper \n";
	}
	else if (choice1 == 1 && choice2 == 3) {
		cout << "Player-1 WINS!!!! \nPlayer-1 choice : Rock\nPlayer-2 choice: Scissors \n";
	}
	else if (choice1 == 2 && choice2 == 1) {
		cout << "Player-2 WINS!!!! \nPlayer-1 choice : Paper\nPlayer-2 choice: Rock \n";
	}
	else if (choice1 == 2 && choice2 == 2) {
		cout << "DRAW!!!! \nPlayer-1 choice : Paper\nPlayer-2 choice: Paper \n";
	}
	else if (choice1 == 2 && choice2 == 3) {
		cout << "Player-2 WINS!!!! \nPlayer-1 choice : Paper\nPlayer-2 choice: Scissors \n";
	}
	else if (choice1 == 3 && choice2 == 1) {
		cout << "Player-2 WINS!!!! \nPlayer-1 choice : Scissors\nPlayer-2 choice: Rock \n";
	}
	else if (choice1 == 3 && choice2 == 2) {
		cout << "Player-1 WINS!!!! \nPlayer-1 choice : Scissors\nPlayer-2 choice: Paper \n";
	}
	else if (choice1 == 3 && choice2 == 3) {
		cout << "DRAW!!!!\nPlayer - 1 choice : Scissors\nPlayer - 2 choice: Scissors \n";
	}
	else {
		cout << "Invalid Input \n";
	}

	return 0;
}