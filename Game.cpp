//Brendan Milligan CIS-2207
//8-27-2022 Create a random number generating guessing game
#include <iostream>
#include "game.h"
#include<cstdlib>
using namespace std;
void prompt() {

	//This method is meant to prompt the user to enter information for the guessing game
	int i = 0;//iterator
	cout << "Enter the number of integers: ";
	cin >> n;
	guess = new int[n];
	cout << "Enter the number of each integer from 1 to (m): ";
	cin >> m;
	cout << "Enter your guesses for the " << n << " integers in the range from 1 to " << m << " that have been selected: ";
	while (i < n) {//this loop will keep taking inputs until it reaches the number of integers chosen by n
		cin >> guess[i];
	}//end of loop
	}//end of prompt
void compare() {
//This function generates the random number and applies them to the array
	//After I will be comparing the rand array with the guess array
	rng = new int[n];
	srand(time(0));
	for (int k = 0;k < n-1;k++) {
		//Must use this equation to set the upper and lower bound on the function
		rng[k] = rand() % (m - 1) + m;
	}
	//Now to compare the arrays
	correct = 0; //Resets the value after each game
	for (int k= 0;k < n-1;k++) {
		if (guess[k] == rng[k]) {
		//If the values are the same, the correct variable will increase
			correct++;
		}
	}//end of for

	cout << "You got " << correct << " correct.\n";
}//end of compare