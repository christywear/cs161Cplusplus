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

// Const Strings
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
    // Results
        const string tie_draw = " We tied! ";
        const string comp_win = " I Win! ";
        const string user_win = " You have won!! ";
    // What beats what
        const string paper_cov = " Paper covers Rock, ";
        const string rock_smash = " Rock smashes Scissors, ";
        const string scissors_cut = " Scissors cut Paper, ";
    // General Strings
        const string new_line = " \n ";
    // Restart or Exit App
        const string restart_app = " Would you like to another one? (Y/N)";

    // Define Variables
        bool prog_reset = false;
        bool prog_end = false;
        void exit_out();
        void invale_d();
        char menu_choice;

int main()
{


    while (!prog_end)
{



        // Introduction and get user choice
        prog_reset = false;
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
            char menu_choice = _getch();
            cout << new_line << endl;

        // Computers pick
        int ran_number;
        // srand wants an unsigned integer, time returns something else
            srand(static_cast<unsigned>(time(0)));
        // get a random number between 1 and 3
            ran_number = rand() % 3 + 1;
            string comp_choice;

            // Computer Rock
            switch(ran_number)
            {
                case 1:
                comp_choice = " Rock ";
                break;

            // Computer Paper
                case 2:
                comp_choice = " Paper ";
                break;


            // Computer Scissors
                case 3:
                comp_choice = " Scissors ";
                break;

            }
       // Compare Computer and User choice
        switch(menu_choice)
        {
            case 'r':
            case 'R':

            // User choice of Rock
                cout << new_line << user_rock << endl;
                cout << new_line << comp_pick;
                cout << comp_choice << endl;
                if (ran_number == 1)
                {
                    cout << new_line << tie_draw << endl;
                }
                else if (ran_number == 2)
                {
                    cout << new_line << paper_cov << comp_win << endl;
                }
                else
                cout << new_line << rock_smash << user_win << endl;
                break;

            case 'p':
            case 'P':

            // User choice of Paper
                cout << new_line << user_paper << endl;
                cout << new_line << comp_pick;
                cout << comp_choice << endl;
                if (ran_number == 2)
                {
                    cout << new_line << tie_draw << endl;
                }
                else if (ran_number == 3)
                {
                    cout << new_line << scissors_cut << comp_win << endl;
                }
                else
                cout << new_line << paper_cov << user_win << endl;
                break;

            case 's':
            case 'S':

            // User choice of Scissors
               cout << new_line << user_scissors << endl;
                cout << new_line << comp_pick;
                cout << comp_choice << endl;
                if (ran_number == 3)
                {
                    cout << new_line << tie_draw << endl;
                }
                else if (ran_number == 1)
                {
                    cout << new_line << rock_smash << comp_win << endl;
                }
                else
                cout << new_line << scissors_cut << user_win << endl;
                break;

            default:
                invale_d();
                break;
        }

            // ask user to start over
            while (!prog_reset)
                  {
                      char start_over;
                      prog_reset = false;
                        cout << new_line << restart_app << new_line  << endl;
                        cin >> start_over;
                    switch (start_over)
                    {
                        case 'n':
                        case 'N':
                                cout << new_line;
                                exit_out();
                                 cout << new_line << endl;
                            // exit switch loop
                                prog_reset = true;
                            // ends game loop
                                prog_end = true;
                            break;
                        case 'Y':
                        case 'y':
                            // exit switch loop
                                prog_reset = true;
                            {
                            // Flush the output stream
                                cout.flush();
                                cin.clear();
                                cin.ignore();
                            }
                            break;

                        default:
                            invale_d();
                            cout << new_line;

                            break;
                    }


                  }

    }


    return 0;
}
// User Error Input
void invale_d()
{
    cout << " Invalid entry, please try again! ";
}
void exit_out()
{
    cout << " Thanks for using my program! ";

}
