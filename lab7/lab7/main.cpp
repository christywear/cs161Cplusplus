/* Author : Christy Ganger
Version: 1
Date: 11/4/2018
LAB : 7
*/

#include <iostream>
#include <string>
#include <cstdlib> /* srand */
#include <ctime> /*time */
#include <limits> /*clearing and ignoring bad input */
#include "const_strings.h" /* all my constant & strings */

#include "my_functions.h" /* function prototypes , and functions*/

int main()
{
    bool done = false;
    char choice, compChoice;
    int winner = 0;
        do
        {
        /*call functions*/

            displayInstructions();
            /*Generates a random number between 80 and 83
            Then takes the capital char values PQRS,
            Assigns to compChoice, And repeats loop if = to Q
            so we only get PRS for Paper rock Scissors
            */
            generate_random_assign(compChoice);

            /* Prompts user to get input for choice,
            and informs user of pc's guess
            */
            choice = getMove();

            /* does the math comparison to see who won,
            and reports it back to user
            */

            getWinner(compChoice, choice);

            /*output winner */
            output_winner_func(winner, compChoice, choice);

            /* prompts user if they wish to play again, if so restarts program */
            done = playAgain();
        }while(!done);
    return 0;
}
