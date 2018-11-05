#include <iostream>
#include <string>
#include <limits>

using namespace std;

/* Program: Lab 5
 * ----------------------
 *Author: Lawrence Warner
 *Last Modified: 10/28/18
 *CS 161 C++
 *
 */

// Define variables
string vert_marks = "";
int sticks_number = 11, stick_sub = 0;
int player_choice = 0, player_turn = 0;
char start_over;
bool done = false;
bool marks_left = false;
bool game_reset = false;
bool game_end = false;

int main()
{

    while (!game_end)
    {
        // new game, clear bool for start of game loop
        marks_left = false;

        // welcome message
        cout << " Welcome to Nim! \n" << endl;

        cout << " Players will take turns removing 1, 2, or 3 sticks from the initial 11." << endl;
        cout << " The player removing the last stick wins! \n" << endl;

        // loop starts here
        while (!marks_left)
        {

            // check who's turn it is
            if (player_turn == 0)
            {
                cout << " Player 1, It's your turn! \n" << endl;
                player_turn++;
            }
            else
            {
                cout << " Player 2, It's your turn! \n" << endl;
                player_turn--;
            }

            // current game output
            cout <<"The game currently looks like this: \n" << endl;

            // calculate number of sticks to display

            for (stick_sub;stick_sub < sticks_number;stick_sub++)
            {
                vert_marks = vert_marks + "| ";
            }


            cout << vert_marks << " \n" <<endl;

            // ask user for round choice
            cout << " How many sticks would you like to remove? \n" << endl;

            while (!done)
            {
                cin >> player_choice;

                if (cin.fail())
                {
                        cin.clear();
                        cin.ignore(numeric_limits<std::streamsize>::max(),'\n');
                        cout << " How many sticks would you like to remove? \n" << endl;
                        continue;
                }

                // define input as  1,2 or 3
                if (player_choice == 1 || player_choice == 2 || player_choice == 3)
                {
                    // check available sticks, subtract if they are present else, prompt again
                    if (sticks_number >= player_choice)
                      {
                        sticks_number = (sticks_number - player_choice);
                         done = true;
                            continue;
                      }
                    else
                    {
                        cout << " There isn't that many left! \n" << endl;
                        cout << " How many sticks would you like to remove? \n" << endl;
                    }
                }
                else
                {
                    cout << " How many sticks would you like to remove? \n" << endl;

                }

            }

            // reset verification for next input
            game_reset = false;
            done = false;
            // reset counter for next loop
            stick_sub = 0;
            // reset counter for next calculation
            vert_marks = "";
            // check if user won
            if (sticks_number == 0)
            {
                if (player_turn == 1)
                cout << " Player one wins! congratulations! \n" << endl;
                else
                    cout << " Player two wins! Congratulations! \n" << endl;


                while (!game_reset)
                  {
                    cout << " Would you like to play again? (Y/N) \n" << endl;
                    cin >> start_over;
                    switch (start_over)
                    {
                        case 'n':
                        case 'N':
                            cout << "Thanks for playing! \n" << endl;
                            // exit switch loop
                            game_reset = true;
                            // exit play loop
                            marks_left = true;
                            // ends game loop
                            game_end = true;
                            break;
                        case 'Y':
                        case 'y':
                            sticks_number = 11;
                            player_choice = 0;
                            // exit switch loop
                            game_reset = true;
                            // exit play loop
                            marks_left = true;

                            {
                            // Flush the output stream
                            cout.flush();
                            cin.clear();
                            cin.ignore();
}
                            break;

                        default:
                            cout << " That's not valid input, please type Y for yes, or N for no" << "\n";

                            break;
                    }
                  }


            }

        }
    }
    return 0;
}
