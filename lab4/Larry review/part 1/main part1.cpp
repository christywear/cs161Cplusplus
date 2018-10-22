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
    int user_number = 0;
    int i = 1;
    char start_over;


// Welcome
    cout << "                     " << endl;
    cout << " Welcome, let's do some factoring!" << endl;


    do
    {
            cout << "                     "  << endl;
            cout << " Please enter a positive integer: ";
            cout << "                     "  << endl;
            cout << " Integer : ";
            cin >> user_number;
            cout << "                     "  << endl;
            while ( user_number <=1 )
            {
                cout << "Wrong input. Please, try again: ";
//clear input buffer
                cin.clear();
                cin.ignore();
                cout << "                     "  << endl;
                cout << " Integer : ";
                cin >> user_number;
                cout << "                     "  << endl;

            }

            cout << " The factors of " << user_number << " are:" << endl;

// Processing
         for (i = 1; i <= user_number; ++i)
        {

            if (user_number % i == 0)
            {

                cout << i << "  ";


            }

        }

        {
// Ask if user wants to enter again
            cout << "\n                     "  << endl;
            cout << " Would you like to start over? [y/n] and enter: ";
            cin >> start_over;
            if ( start_over != 'Y' and start_over != 'y' and start_over != 'N' and start_over != 'n')
            cout << start_over << " is not a valid option. Try again" << endl;
        }
    }while ( start_over == 'Y' || start_over =='y' );


    return 0;
}
