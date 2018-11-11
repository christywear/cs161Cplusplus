/* author psudocode : christy Ganger
date 11/10/2018
project lab7 part to
class cis161c++
*/
// includes
#include <iostream>
#include <string> /*strings*/
#include <cstdlib> /*srand*/
#include <ctime> /*time*/
#include <ctype.h>
#include <limits>
/*user includes */
#include "lab7_part2_const.h" /*constants */
#include "lab7_part2_functions.h" /*functions*/



/*function prototypes*/
void displayinstructions(); /*introduces the program asks for input */
int getNumber(int, int); /*gets a number back from the srand */
int getMove(int, int); /* gets a move from user and checks it */
bool Winnerplease(int, int); /* used for loop to decide if user won or not and updates the user */
bool playAgain(); /* bool check to play again */


/*main ... Start! */
int main()
{
    /*variables*/
    int rand_number, user_number;

    /* main loop*/
    do
    {


        displayinstructions();
        rand_number = getNumber(min_num, max_num);
        /*secondary loop to play lower higher */
        do
            {user_number = getMove(min_num, max_num);

        }while (Winnerplease(user_number, rand_number));
    }while (!(playAgain()));
    return 0;
}

