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


// Prototype Functions
        void display_instructions();
        int get_number();
        void get_move(int rand_number_permenant_temp_getmove);
        bool play_again();


// Main program
int main()
{
        int rand_number_permenant = 0;
   do
    {
        // Get instructions
            display_instructions();
        // Get random number
            get_number();
            rand_number_permenant = get_number();
            cout << rand_number_permenant;
        // Get user number and compare against random number
            get_move(rand_number_permenant);
        // Ask user if wanting to play again / close program
   }while(play_again());
    return 0;
}


 // Constraint Strings
                // get_move Strings
                const string welcome_intro = " Welcome to a game of Hi/Low. \n";
                const string user_inform = " Please choose a number between 1 and 99. \n";
                const string user_choice = " Your choice is: ";
                const string wrong_entry = " Wrong input. Please, try again: \n";
                const string user_low = " Your number is to low! \n";
                const string user_high = " Your number is to high! \n";
                const string user_win = " Congratulations, You picked the right number! \n";
                const string counter_1 = " It took you ";
                const string counter_2 = " tries to get the right answer! \n";
                // play_again Strings
                const string restart_app = " Would you like to start over?";
                const string user_yn = " [y/n]: ";
                const string thanks_playing = " Thanks for playing. \n";
                const string error_entry = " That's not valid input, please type Y for yes, or N for no \n";
                // General Strings
                const string new_line = " \n ";


//Intro no inputs, displays	the	instructions
void display_instructions()
{
                // Intro
                cout << welcome_intro << endl;
                cout << user_inform << endl;
}

// 	inputs	are	min	and	max, returns a random number between min and max
int get_number()
{
    int ran_number_temporary;
                // Computers pick

                // srand wants an unsigned integer, time returns something else
                srand(static_cast<unsigned>(time(0)));
                // get a random number between 1 and 99
                ran_number_temporary = rand() % 99 + 1;
                return ran_number_temporary;
}

//	inputs	are	min	and	max, gets, validates, returns an integer from the user that	is between min and max
void get_move(int rand_number_permenant_temp_getmove)
{
                // User choice
                int user_number;
                // Counter
                int counter = 0;

                    cout << user_choice;
                    cin >> user_number ;
                    cout << new_line;
                while (!cin)
            {
                    cout << wrong_entry;
                //clear input buffer
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << user_choice;
                    cin >> user_number;
                    cout << new_line;
            }
                 while ( user_number < 1 || user_number > 99)
            {
                    cout << new_line << wrong_entry;
                //clear input buffer
                    cin.clear();
                    cin.ignore(1000, '\n');

                    cout << user_choice;
                    cin >> user_number;
                    cout << new_line;
            }
                // User high/low or win
                    counter++;
        while(user_number != rand_number_permenant_temp_getmove)
        {
                if (user_number < rand_number_permenant_temp_getmove)
            {
                    cout << user_low << endl;
                    cout << user_choice;
                    cin >> user_number;
                    cout << new_line;
                    while (!cin)
            {
                    cout << wrong_entry;
                //clear input buffer
                    cin.clear();
                    cin.ignore();
                    cout << user_choice;
                    cin >> user_number;
                    cout << new_line;
            }
                 while ( user_number < 1 || user_number > 99)
            {
                    cout << new_line << wrong_entry;
                //clear input buffer
                    cin.clear();
                    cin.ignore();

                    cout << user_choice;
                    cin >> user_number;
                    cout << new_line;
            }
                    counter++;
            }
                else if (user_number > rand_number_permenant_temp_getmove)
            {
                    cout << user_high << endl;
                    cout << user_choice;
                    cin >> user_number;
                    cout << new_line;
                    while (!cin)
            {
                    cout << wrong_entry;
                //clear input buffer
                    cin.clear();
                    cin.ignore();
                    cout << user_choice;
                    cin >> user_number;
                    cout << new_line;
            }
                 while ( user_number < 1 || user_number > 99)
            {
                    cout << new_line << wrong_entry;
                //clear input buffer
                    cin.clear();
                    cin.ignore();

                    cout << user_choice;
                    cin >> user_number;
                    cout << new_line;
            }
                    counter++;
            }

        }
                if (user_number == rand_number_permenant_temp_getmove)
            {
                    cout << user_win << endl;
                    cout << counter_1 << counter << counter_2;
                    cout << new_line;

            }





}
// no inputs, return true if the user wants	to go again, false if they do not
bool play_again()
{
    bool done = false;
    char start_over;
    bool prog_end = true;
                // Restart or Exit App
                    // ask user to start over
                    while (prog_end)
                    {
                                cout << restart_app << endl;
                                cout << user_yn;
                                cin >> start_over;
                                cout << new_line << endl;
                    switch (start_over)
                        {
                        case 'n':
                        case 'N':
                                cout << thanks_playing << endl;
                            // exit switch loop
                            done = false;
                            prog_end = false;

                            break;
                        case 'Y':
                        case 'y':
                            // exit switch loop
                                prog_end = false;
                                done = true;
                            break;

                        default:
                                cout << error_entry << new_line;

                            break;
                            }


                    }
                    return done;
}



