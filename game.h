#pragma once
//Brendan Milligan CIS-2207
//8-27-2022 Create a random number generating guessing game


//declare any methods in here to carry it over to other .cpp files
int n=0;//number of integers
int m=0; //max range of numbers
int* guess;//array of guesses
int* rng;//random number generated array
int correct = 0;//Number of correct guesses

void prompt();
void compare();
