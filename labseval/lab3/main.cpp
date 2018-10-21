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
 *Last Modified: 10/11/18
 *CS 161 C++
 *
 */
int main()
{
// Define functions
    double sales_input, commission_output;
    cout << std::fixed;
    cout << std::setprecision(2);
    char start_over;

// Sales commission graphics
    cout << "                     " << endl;
    cout << " -------------------------------------------------------------------------------------------" << endl;
    cout << " |          Sales Price     |                          Commission                          |" << endl;
    cout << " -------------------------------------------------------------------------------------------" << endl;
    cout << " | Less than $100,000       | %5 of the sales price                                        |" << endl;
    cout << " -------------------------------------------------------------------------------------------" << endl;
    cout << " | $100,000 to $300,000     | $5,000 + 10% of the amount of the sales price over $100,000  |" << endl;
    cout << " -------------------------------------------------------------------------------------------" << endl;
    cout << " | More than $300,000       | $25,000 + 15% of the amount of the sales price over $300,000 |" << endl;
    cout << " -------------------------------------------------------------------------------------------" << endl;

    do
    {
// Display question to user
        cout << "                     " << endl;
        cout << " Please input your sales price - $";

// User input of sales price
        cin >> sales_input;

// Calculate commission
// Throw away enter
        cin.ignore();

// If the sales price is less than 1
        if ( sales_input < 1 )
        {
            cout << " " << endl;
            cout <<" Invalid Entry, Please try again.";
            break;
        }
// If the sales price is less than 100000
        else if ( sales_input < 100000 )
        {
            cout << "                     " << endl;
            cout << " Is $" << sales_input << " the correct amount? If yes, hit enter";
            cin.get();
            commission_output = sales_input * .05;
            cout << " " << endl;
            cout <<" Your commission is $ ";
            cout << commission_output;
            cout << "                     " << endl;
        }
// If the sales price is between 100000 and 299999
        else if ( sales_input < 300000 )
        {
            cout << "                     " << endl;
            cout << " Is $" << sales_input << " the correct amount? If yes, hit enter";
            cin.get();
            commission_output = ((sales_input - 100000) * .10) + 5000;
            cout << " " << endl;
            cout<<" Your commission is $ ";
            cout << commission_output;
            cout << "                     " << endl;
        }
// If the sales price is more than 300000
        else if ( sales_input >= 300000 )
        {
            cout << "                     " << endl;
            cout << " Is $" << sales_input << " the correct amount? If yes, hit enter";
            cin.get();
            commission_output = ((sales_input - 300000) * .15) + 25000;
            cout << " " << endl;
            cout <<" Your commission is $ ";
            cout << commission_output;
            cout << "                     " << endl;
        }
        {
// Ask if user wants to enter again
            cout << "                     "  << endl;
            cout << " Would you like to start over? [y/n] and enter: ";
            cin >> start_over;
            if ( start_over != 'Y' and start_over != 'y' and start_over != 'N' and start_over != 'n')
            cout << start_over << " is not a valid option. Try again" << endl;
        }
        }while ( start_over == 'Y' || start_over =='y' );


    return 0;
}
