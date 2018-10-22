#include <iostream>



using namespace std;

/* Program: Lab 4
 * ----------------------
 *Author: Lawrence Warner
 *Last Modified: 10/21/18
 *CS 161 C++
 *
 */
int main()
{

// Define functions
    int user_number1 = 0, user_number2 = 0, low_answer = 0, hi_answer = 0, low_answer2 = 0, hi_answer2 = 0;
    int  counter = 0, small_num , hi_num;
    char start_over;

// Display question to user
    cout << " \n" << " *********************************" << endl;
    cout << " *********************************" << endl;
    cout << " * Welcome to my game of hi/low. *"  << endl;
    cout << " *********************************" << endl;
    cout << " *********************************" << endl;

    do
    {

            cout << " \n" << " Please enter 2 integers, between 1 and 100 : ";

            cout << " \n" << " Integer one : ";
            cin >> user_number1;

            cout << " \n" << " Integer two : ";
            cin >> user_number2;

            while ( user_number1 < 0 || user_number1 > 100 || user_number2 < 0 || user_number2 > 100)
            {
                cout << " \n" << " Wrong input. Please, try again: ";

//clear input buffer
                cin.clear();
                cin.ignore();

                cout << " \n" << " Integer one : ";
                cin >> user_number1;

                cout << " \n" << " Integer two : ";
                cin >> user_number2;


            }
// User hit 0 and ends the loop
            if (user_number1 == 0 || user_number2 == 0)
            {
                cout << " \n" << " You have decided to end the program." << endl;
                break;
            }

// Computes Hi/Low
                if (user_number1 < user_number2)
                {
                    low_answer = user_number1;
                    hi_answer = user_number2;
                }
                else if (user_number1 > user_number2)

                {
                    hi_answer = user_number1;
                    low_answer = user_number2;
                }

                if (counter == 0)
                {
                    small_num = 100;
                    hi_num = 0;
                }
                    if (low_answer < small_num)
                    {
                        small_num = low_answer;
                    }
                    if (hi_answer >  hi_num)
                    {
                        hi_num = hi_answer;
                    }


// Displays Hi/Low results
                counter++;
                cout << " \n" << " Your lowest number is " << small_num << " and your highest is " << hi_num << "." << endl;
                cout << " \n" << " The current sets of number you have entered are " << counter << "." << endl;
        {
// Ask if user wants to go again

                cout<< " \n" << " Would you like to start over? [y/n] and enter: ";
                cin >> start_over;
            if ( start_over != 'Y' and start_over != 'y' and start_over != 'N' and start_over != 'n')
                cout << " \n" << start_over << " is not a valid option. Try again" << endl;
        }

    }while ( start_over == 'Y' || start_over =='y' );

    return 0;
}
