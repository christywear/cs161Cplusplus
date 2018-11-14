#include <iostream>
// Sleep function
#include <windows.h>
// included for random functions
#include <cstdlib>
// included to get the time for srand
#include <ctime>
// Choice without return key
#include <conio.h>
#include <string>

 using namespace std;

/* Program: Lab 7 part 1
 * ----------------------
 *Author: Lawrence Warner
 *Last Modified: 11/06/18
 *CS 161 C++
 *
 */

 // Prototype Functions
        void display_instructions();
        char get_move(char& comp_choice, char& menu_choice);
        void get_winner(char& comp_choice, char& menu_choice);
        bool play_again();


int main()
{
    char comp_choice, menu_choice;
    do
    {
        // Get instructions
            display_instructions();
        // Get user number and compare against computer pick
            get_move(comp_choice, menu_choice);
        // Get Winner
            get_winner(comp_choice, menu_choice);
        // Ask user if wanting to play again / close program
   }while(play_again());
return 0;
}


// Constraint Strings
    // Intro
        const string welcome_intro = " Welcome to Rock, Paper, Scissors ";
        const string user_inform = " On the count of three please make a choice of: ";
        const string user_choice = " (r/R)ock, (p/P)aper, or (s/S)issors";
        const string user_ready = " Ready: ";
        const string count_1 = " 1. ";
        const string count_2 = " 2. ";
        const string count_3 = " 3. ";
    // User Choice
        const string user_rock = " You have chosen Rock. ";
        const string user_paper = " You have chosen Paper. ";
        const string user_scissors = "You have chosen Scissors ";
    // Computer Choice
        const string comp_pick = " Computer has chosen: ";
        const string comp_choice_r = " Rock ";
        const string comp_choice_p = " Paper ";
        const string comp_choice_s = " Scissors ";
    // Results
        const string tie_draw = " We tied! ";
        const string comp_win = " I Win! ";
        const string user_win = " You have won!! ";
        const string tie_count = " Ties! ";
        const string user_count = " User Wins! ";
        const string comp_count = " Computer Wins! ";
    // What beats what
        const string paper_cov = " Paper covers Rock, ";
        const string rock_smash = " Rock smashes Scissors, ";
        const string scissors_cut = " Scissors cut Paper, ";
    // General Strings
        const string new_line = " \n ";
    // Restart or Exit App
        const string restart_app = " Would you like to another one? ";
        const string user_yn = " [y/n]: ";
        const string thanks_playing = " Thanks for playing. \n";
    // Error Variables
        const string wrong_entry = " Wrong input. Please, try again: \n";
        const string error_entry = " That's not valid input, please type Y for yes, or N for no \n";



// Intro no inputs, displays	the	instructions
void display_instructions()
{
        // Introduction and get user choice
            cout << welcome_intro << new_line << endl;
            cout << user_inform << new_line << endl;
            cout << user_choice << new_line << endl;
            cout << user_ready;
        Sleep(1000);
            cout << count_1;
        Sleep(1000);
            cout << count_2;
        Sleep(1000);
            cout << count_3;

}
// No inputs, get move from	user and validate, return lower case char (‘r’,’p’,’s’)
char get_move(char& comp_choice, char& menu_choice)
{
        // User Choice
            cin >> menu_choice;
            //char menu_choice = _getch();
            cout << new_line << endl;
        // Computers pick
            int ran_number;
            //char comp_choice;
        // srand wants an unsigned integer, time returns something else
            srand(static_cast<unsigned>(time(0)));
        // get a random number between 1 and 3
            ran_number = rand() % 3 + 1;


            // Computer Rock
            switch(ran_number)
            {
                case 1:
                return comp_choice = 'r';
                break;

            // Computer Paper
                case 2:
                return comp_choice = 'p';
                break;


            // Computer Scissors
                case 3:
                return comp_choice = 's';
                break;
            }

            return menu_choice;

}
// Inputs are two chars (user move and computer move) return 1 for user win, 2 for computer win, 3 for tie.
void get_winner(char& comp_choice, char& menu_choice)
{

       // Compare Computer and User choice
        switch(menu_choice)
        {
            case 'r':
            case 'R':

            // User choice of Rock
                cout << user_rock << endl;
                if (comp_choice == 'r')
                {
                cout << new_line << comp_pick;
                cout << comp_choice_r << endl;
                cout << new_line << tie_draw << endl;
                }
                else if (comp_choice == 'p')
                {
                    cout << new_line << comp_pick;
                    cout << comp_choice_p << endl;
                    cout << new_line << paper_cov << comp_win << endl;
                }
                else
                {
                    cout << new_line << comp_pick;
                    cout << comp_choice_s << endl;
                    cout << new_line << rock_smash << user_win << endl;
                }
                break;

            case 'p':
            case 'P':

            // User choice of Paper
                cout << user_paper << endl;
                if (comp_choice == 'p')
                {
                    cout << new_line << comp_pick;
                    cout << comp_choice_p << endl;
                    cout << new_line << tie_draw << endl;
                }
                else if (comp_choice == 's')
                {
                    cout << new_line << comp_pick;
                    cout << comp_choice_s << endl;
                    cout << new_line << scissors_cut << comp_win << endl;
                }
                else
                {
                    cout << new_line << comp_pick;
                    cout << comp_choice_r << endl;
                    cout << new_line << paper_cov << user_win << endl;
                }
                break;

            case 's':
            case 'S':

            // User choice of Scissors
               cout << user_scissors << endl;
                if (comp_choice == 's')
                {
                    cout << new_line << comp_pick;
                    cout << comp_choice_s << endl;
                    cout << new_line << tie_draw << endl;
                }
                else if (comp_choice == 'r')
                {
                    cout << new_line << comp_pick;
                    cout << comp_choice_r << endl;
                    cout << new_line << rock_smash << comp_win << endl;
                }
                else
                {
                    cout << new_line << comp_pick;
                    cout << comp_choice_p << endl;
                    cout << new_line << scissors_cut << user_win << endl;
                }
                break;

            default:
                cout << wrong_entry;
                break;
        }
}
// No inputs, return true if the user wants	to go again, false if they do not
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


