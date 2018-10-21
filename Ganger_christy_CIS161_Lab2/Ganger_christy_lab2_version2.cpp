/* Fall 2018
CIS 161C++
Written by : Christy Ganger.
Special thanks to https://stackoverflow.com/users/5622585/t-mahon
answer for curser for input found at https://stackoverflow.com/questions/10401724/move-text-cursor-to-particular-screen-coordinate
*/

// cin cout
#include <iostream>
// time for srand
#include <ctime>
// output formatting
#include <iomanip>
// srand and rand
#include <cstdlib>
// input formatting
#include <windows.h>
using namespace std;

int main()
{
    //generating random numbers for calculating
srand(time(0));
int firstnumber = rand() % 99 + 1;
int secondnumber = rand() % 99 + 1;
//getting answer
int answer = firstnumber + secondnumber;
int userreply;
// simplifying out
string question = "What is the sum of ";
// querying user
cout << question << firstnumber << " and " << secondnumber << " ?" << endl;
//making it fancy
cout << "----------------------" << endl;
cout << "| Your answer is:     |" << endl;
cout << "----------------------" << endl;
// formatting input based on answer size
HANDLE hStdout;
COORD destCoord;
hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

//position cursor at start of window
if (answer > 99)
    destCoord.X = 18;
    else destCoord.X =19;

destCoord.Y = 2;
SetConsoleCursorPosition(hStdout, destCoord);
cin >>  userreply ;

// outputting real answer
cout << "\n\n" << setw(4) << firstnumber << "\n+" << setw(3) <<  secondnumber << "\n ---\n" << setw(4) <<answer;


    return 0;
}
