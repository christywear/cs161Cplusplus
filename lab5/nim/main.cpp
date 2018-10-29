/*
Author : Christy Ganger
Class CS161C++
Lab 5: Nim
Date 10/28/2018
*/

#include <iostream>
#include <string>
#include <limits>

/*in game constant dialog strings*/
const std::string welcome = "Welcome to Nim!";
const std::string rules = "Players will take turns removing 1, 2, or 3 sticks from the initial 11. The player removing the last stick wins!";
const std::string player_one = "Player 1, It's your turn!";
const std::string player_two = "Player 2, It's your turn!";
const std::string player_one_wins = "Player one wins! congratulations!";
const std::string player_two_wins = "Player two wins! Congratulations!";
const std::string current_game = "The game currently looks like this:";
const std::string outtro = "How many sticks would you like to remove?";
const std::string input_error_number = "There isn't that many left";
const std::string switch_has_bad_input = "That's not valid input, please type Y for yes, or N for no";
const std::string ask_play_again = "Would you like to play again? (Y/N)";
const std::string thanks_play = "Thanks for playing!";
const std::string screen_clear = "\n\n\n\n\n\n\n\n\n\n\n\n";
const long BUFF_SIZE = std::numeric_limits<std::streamsize>::max();

/* in game variables */
std::string starting_marks = "";
int current_number_of_sticks = 11;
int stick_division = 0;
int player_choice = 0;
int whos_turn = 0;
char play_again;
bool done = false;
bool no_still_sticks_left = false;
bool good_input_for_exit = false;
bool end_game = false;

int main()
{

    while (!end_game)
    {
        /* new game, clear bool for start of game loop */
        no_still_sticks_left = false;

        /*intro output */
        std::cout << welcome << "\n" << "\n";

        std::cout << rules << "\n" << "\n";

        /* loop starts here*/
        while (!no_still_sticks_left)
        {

            /*check who's turn it is*/
            if (whos_turn == 0)
            {
                std::cout << screen_clear;
                std::cout << player_one << "\n" << "\n";
                whos_turn++;
            }
            else
            {
                std::cout << screen_clear;
                std::cout << player_two << "\n" << "\n";
                whos_turn--;
            }

            /* give user prompt for understanding current spot in game */
            std::cout << current_game << "\n" << "\n";

            /*calculate number of sticks to display */

            for (stick_division;stick_division < current_number_of_sticks;stick_division++)
            {
                starting_marks = starting_marks + "| ";
            }


            std::cout << starting_marks << "\n" << "\n";

            /* send user prompt for input, get input check */
            std::cout << outtro << "\n" << "\n";

            while (!done)
            {
                std::cin >> player_choice;
                /* not an int check */
                if (std::cin.fail())
                {
                        std::cin.clear();
                        std::cin.ignore(BUFF_SIZE,'\n');
                        std::cout << outtro << "\n" << "\n";
                        continue;
                }

                /* define input as  1,2 or 3 */
                if (player_choice == 1 || player_choice == 2 || player_choice == 3)
                {
                    /*check available sticks, subtract if they are present else, prompt again */
                    if (current_number_of_sticks >= player_choice)
                      {
                        current_number_of_sticks = (current_number_of_sticks - player_choice);
                         done = true;
                            continue;
                      }
                    else
                    {
                        std::cout << input_error_number << "\n";
                        std::cout << outtro << "\n" << "\n";
                    }
                }
                else
                {
                    std::cout << outtro << "\n" << "\n";

                }

            }

            /* reset verification loop for next input */
            good_input_for_exit = false;
            done = false;
            /* reset for stick counter for next loop */
            stick_division = 0;
            /*reset stick counter for next loop calculation */
            starting_marks = "";
            /*check if user won */
            if (current_number_of_sticks == 0)
            {
                if (whos_turn == 1)
                std::cout << player_one_wins << "\n";
                else
                    std::cout << player_two_wins << "\n";


                while (!good_input_for_exit)
                  {
                    std::cout << ask_play_again << "\n";
                    std::cin >> play_again;
                    switch (play_again)
                    {
                        case 'n':
                        case 'N':
                            std::cout << thanks_play << "\n";
                            /*exit switch loop */
                            good_input_for_exit = true;
                            /*exit play loop */
                            no_still_sticks_left = true;
                            /*ends game loop*/
                            end_game = true;
                            break;
                        case 'Y':
                        case 'y':
                            current_number_of_sticks = 11;
                            player_choice = 0;
                            /*exit switch loop */
                            good_input_for_exit = true;
                            /*exit play loop */
                            no_still_sticks_left = true;

                            std::cout << screen_clear;

                            break;
                        default:
                            std::cout << switch_has_bad_input << "\n";

                            break;
                    }
                  }


            }

        }
    }
    return 0;
}
