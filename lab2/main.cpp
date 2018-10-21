#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
srand(time(0));
int firstnumber = rand() % 99 + 1;
int secondnumber = rand() % 99 + 1;
int answer = firstnumber + secondnumber;
int userreply;
string question = "What is the sum of ";

cout << question << firstnumber << " and " << secondnumber << " ?" << "\n ";
cin >>  userreply ;


cout << "\n\n" << setw(4) << firstnumber << "\n+" << setw(3) <<  secondnumber << "\n ---\n" << setw(4) <<answer;


    return 0;
}
