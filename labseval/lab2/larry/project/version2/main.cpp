#include <iostream>
// included for random functions
#include <cstdlib>
// text formating
#include <iomanip>
// included to get the time for srand
#include <ctime>

using namespace std;

/* Program: Lab 2
 * ----------------------
 *Author: Lawrence Warner
 *Last Modified: 10/4/18
 *CS 161 C++
 *
 */
int main()
{

// srand wants an unsigned integer, time returns something else
     srand(static_cast<unsigned>(time(0)));

 // define a variable for both of the random numbers
    int ran_number1;
    int ran_number2;

// get a random number between 1 and 99 for both random numbers
    ran_number1 = rand() % 99 + 1;
    ran_number2 = rand() % 99 + 1;

// display question to user
    cout << "What is the sum of " << ran_number1 << " and " << ran_number2 << "?" << endl;

// display equation
    cout << "                           " << endl;
    cout << setw(4) << ran_number1 << endl;
    cout << "+" << setw(3) << ran_number2 << endl;
    cout << " ---" << endl;

// define user answer
    int user_answer;

// user inputs answer
    cin >> user_answer;

// Define and compute equation
    int ran_answer;
    ran_answer = ran_number1 + ran_number2;

// display correct answer
    cout << "                           " << endl;
    cout << "The correct answer is " <<  ran_answer << "." << endl;

    return 0;
}
