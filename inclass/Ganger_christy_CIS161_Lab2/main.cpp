#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
/* seed random from time */
srand(time(0));
/* get numbers from random, then add them together, make a handy string to tidy up our cout */
int firstnumber = rand() % 99 + 1;
int secondnumber = rand() % 99 + 1;
int answer = firstnumber + secondnumber;
int userreply;
string question = "What is the sum of ";

/* cout and cin */
cout << question << firstnumber << " and " << secondnumber << " ?" << "\n ";
cin >>  userreply ;

/* simple math format of cout with setw to make things comfy */

cout << "\n\n" << setw(4) << firstnumber << "\n+" << setw(3) <<  secondnumber << "\n ---\n" << setw(4) <<answer;


    return 0;
}
