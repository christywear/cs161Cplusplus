#include <iostream>
// included to get the time for srand
#include <ctime>
// included for random functions
#include <cstdlib>
// Choice without return key
#include <conio.h>
#include <limits>

using namespace std;

/* Program: Lab 7 part 2
 * ----------------------
 *Author: Lawrence Warner
 *Last Modified: 11/09/18
 *CS 161 C++
 *
 */

int ran_number;
bool done = false;
//Intro no inputs, displays	the	instructions
void display_instructions()
{
                // Intro
                cout << " Welcome to a game of Hi/Low. \n" << endl;
                cout << " Please choose a number between 1 and 99. \n" << endl;
}

// 	inputs	are	min	and	max, returns a random number between min and max
void get_number()
{
                // Computers pick

                // srand wants an unsigned integer, time returns something else
                srand(static_cast<unsigned>(time(0)));
                // get a random number between 1 and 99
                ran_number = rand() % 99 + 1;
                //return ran_number;
}

//	inputs	are	min	and	max, gets, validates, returns an integer from the user that	is between min and max
void get_move()
{
                // User choice
                int user_number;
                int counter = 0;
                //get_number();
                //get_number = ran_number;

                    cout << " Your choice is: ";
                    cin >> user_number ;
                    cout << " \n ";
                while (!cin)
            {
                    cout << "Wrong input. Please, try again: \n";
                //clear input buffer
                    cin.clear();
                    cin.ignore();
                    cout << " Your choice is: ";
                    cin >> user_number;
                    cout << " \n ";
            }
                 while ( user_number < 1 || user_number > 99)
            {
                    cout << " \n" << " Wrong input. Please, try again: \n";
                //clear input buffer
                    cin.clear();
                    cin.ignore();

                    cout << " Your choice is: ";
                    cin >> user_number;
                    cout << " \n ";
            }
                // User high/low or win
                    counter++;
                while (user_number < ran_number)
            {
                    cout << " Your number is to low! \n" << endl;
                    cout << " Your choice is: ";
                    cin >> user_number;
                    cout << " \n ";
                    counter++;
            }
                while (user_number > ran_number)
            {
                    cout << " Your number is to high! \n" << endl;
                    cout << " Your choice is: ";
                    cin >> user_number;
                    cout << " \n ";
                    counter++;
            }
                if (user_number == ran_number)
            {
                    cout << " Congratulations, You picked the right number! \n" << endl;
                    cout << " It took you " << counter << " tries to get the right answer! \n";
                    cout << " \n ";
            }


}
// no inputs, return true if the user wants	to go again, false if they do not
char play_again()
{
    char start_over;
    bool prog_end = true;
                // Restart or Exit App
                    // ask user to start over
                    while (prog_end)
                    {
                                cout << " Would you like to start over?" << endl;
                                cout << " [y/n]: ";
                                cin >> start_over;
                                cout << " \n " << endl;
                    switch (start_over)
                        {
                        case 'n':
                        case 'N':
                                cout << " Thanks for playing. \n" << endl;
                            // exit switch loop
                            done = true;
                            prog_end = false;
                            //return done;
                            break;
                        case 'Y':
                        case 'y':
                            // exit switch loop
                                prog_end = false;
                            break;

                        default:
                                cout << " That's not valid input, please type Y for yes, or N for no \n" << "\n";

                            break;
                            }


                    }
}


int main()
{
int rand_number;
   do
   {
    // Get instructions
    display_instructions();
    // Get random number
    get_number();
    ran_number;
    // Get user number and compare against random number
    get_move();
    // Ask user if wanting to play again
    play_again();

   }while(!done);
    return 0;
}
