//Brendan Milligan CIS-2207
//8-27-2022 Create a random number generating guessing game
#include "game.h"
#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
	string again;
	do {
		prompt();
		compare();
		cout << "Would you like to play again? (Y/N)\n";
		cin >> again;
		//Type Y for yes, anything else will end the program
	} while (again == "Y");
	cout << "Goodbye!";
}//end of main