/* Christy Ganger
Lab 9
*/

#include <string>
#include <iostream>
#include "functions.h"
#include "constants.h"



int main()
{
    do
    {
        std::string wheretoreadfrom;


/***********************************************************************/
/*  This is where all the long strings live, for each function.        */
/*  left for easy edits. left, as constant to make easier to reference */
/*  at a glance, easily editable.                                      */
/*  format :                                                           */
/*  example:  const std:string func_name = "your string goes here";    */                               */
/***********************************************************************/
        introstuff();


/***********************************************************************/
/*  This function gets input from the user, stores it in whereto read  */
/*    from Then returns it to main.                                    */
/***********************************************************************/
        wheretoreadfrom = getinput();


/***********************************************************************/
/*  This function reads the input file given by user, then feeds       */
/*  the string "grrr" as if it's an array assigning proper position of */
/*  single digit number, or character to a variable, which will be     */
/*  passed to the individual functions and writes them to the output   */
/*  file, closing and returning to main.                               */
/***********************************************************************/
        processinputfile(wheretoreadfrom);


/***********************************************************************/
/*  This function is extra, asks if the user would like to see what    */
/*  got printed out to the file, by printing it on the screen.         */
/*                                                                     */
/***********************************************************************/
        printout();



/***********************************************************************/
/*  This function is extra, asks if the user would like to see start   */
/*  the program over and read another file                             */
/*                                                                     */
/***********************************************************************/
    }while(playagain());
    return 0;
}
