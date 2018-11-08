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
#include "Variables.h" /*all variables */ //global variables are BAD REDO!
#include "my_functions.h" /* function prototypes , and functions*/

int main()
{
        do
        {
        /*call functions*/

            /*Generates a random number between 80 and 83
            Then takes the capital char values PQRS,
            Assigns to compChoice, And repeats loop if = to Q
            so we only get PRS for Paper rock Scissors
            */
            generate_random_assign(compChoice);

            /* Prompts user to get input for choice,
            and informs user of pc's guess
            */
            get_input_output_pc_choice(compChoice, choice);

            /* does the math comparison to see who won,
            and reports it back to user
            */
            do_comparison_out_result(compChoice, choice);

            /* prompts user if they wish to play again, if so restarts program */
            play_again();
        }while(!done);
    return 0;
}
