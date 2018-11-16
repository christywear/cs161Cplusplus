#include <iostream>
using namespace std;

int getInput(int min, int max);
bool getYesNo();
int calcBirthYear(int age, int curYear, bool bDayPassed);

int main()
{
    cout << "How old are you?" << endl;
    int age = getInput(1, 125);
    cout << "Have you had a birthday yet?" << endl;
    bool hadBDay = getYesNo();
    const int thisYear = 2010;
    cout << "You were born in " << calcBirthYear(age, thisYear, hadBDay) << endl;

  /* // Test Drivers
     // Driver for calcBirthYear
    cout << "For age 50, already had a birthday, should be 1960: " << calcBirthYear(50, 2010, true) << endl;
    cout << "For age 10, hasn't had a birthday yet, should be 1999: " << calcBirthYear(10, 2010, false) << endl;

    // Driver for getYesNo should only return true for y and false for n
    // Be sure to test y, Y, n, N and some other letters.
        cout << "You entered: " << getYesNo() << endl;

    // Driver for getInput should only return numbers
    // 0 through 10. Enter 0 to exit. Be sure to test 0, 100 and something in between.
    // (The loop is for loop for convenient testing)
    int num = 0;
    do
    {
        num = getInput(0, 100);
        cout << "You entered: " << num << endl;
    } while (num > 0);
    */

    return 0;
}

// Get input from the user and validate that it is in the
// range from min to max.
int getInput(int min, int max)
{
    int userNum = 0;

    cout << "Enter a number from " << min << " to " << max << ": ";
    cin >> userNum;
    while (userNum < min || userNum > max)
    {
        cout << "Your number was out of range, reenter: ";
        cin >> userNum;
    }

    return userNum;
}

// Get user input. Return true for 'y' or 'Y' and false for 'n' or 'N'
// give an error message for anything else.
bool getYesNo()
{
    char userLetter = 'x';
    cout << "Enter y or n: ";
    cin >> userLetter;
    while (userLetter != 'n' && userLetter != 'N' && userLetter != 'y' && userLetter != 'Y')
    {
        cout << "You did not enter y or n, reenter: ";
        cin >> userLetter;
    }
   return (userLetter == 'y' || userLetter == 'N');
}

// Calculate the year the user was born based on their age,
// the current year, and whether they have had a birthday this year
int calcBirthYear(int age, int curYear, bool bDayPassed)
{
    if (bDayPassed)
        return curYear - age;
    else
        return curYear - age - 1;
}

/* // Stubs
int getInput(int min, int max)
{
    return 0;
}

bool getYesNo()
{
    return false;
}

int calcBirthYear(int age, int curYear, bool bDayPassed)
{
    return 0;
}
*/
