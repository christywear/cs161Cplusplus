//Find the errors in the following program. You must use pass by reference.
//Write a simple program with functions that calculates the perimeter and area of a square.

//You will need two functions:

//Get an integer from the user and return it to the main program (no validation required)
//Calculate the area and perimeter of the square and return both to the main program (the length of a side is passed in as a parameter)
//Main will call the first function and pass its value to the second function.  It will then call the second function, save the results, and display them with using a cout statement.

//Your second function should not do any I/O.  Just get a number from main, calculate the results, and return them.
#include <iostream>

using namespace std;

void square_info(int length, int square_peri, int square_area);

int main()
{
    int length, square_peri = 0, square_area = 0;


    cout << "Lets calculate the perimeter and area of a square" << "\n";
    cout << "please enter the size of a side" << "\n";
    cin >> length;
    square_info(length, square_area, square_peri);
    cout << "the perm is " << square_peri << " the area is " << square_area << "\n";

    return 0;
}

void square_info(int length, int &square_peri, int &square_area)
{
    square_peri = length * 4;
    square_area = length * 2;
    return;
}

