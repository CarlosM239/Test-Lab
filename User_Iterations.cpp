#include "receipt_Program.h"


bool continueOrNot() {
	string pick = "";
	cout << "\n\t\t\tWould you like to add more events? (y/n): ";
	cin >> pick;
	cout << '\n';

	if (pick[0] == 'y' || pick[0] == 'Y') {
		return true;
	}
	else if (pick[0] == 'n' || pick[0] == 'N') {
		return false;
	}
}

int get_verify_choice() {
	int raw_choice;
	cin >> raw_choice;
	//if choice is within not within range of 0-3 will return 10 
	//which will in main be used to exit user out of the program.
	if (raw_choice < 0 || raw_choice > 3) {
		return 10;
	}
	return raw_choice;			//returns a valid choice 0-3.
}
