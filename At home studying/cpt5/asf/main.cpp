#include <iostream>
#include <string>
#include <iomanip>
#include <limits>


int main()
{
    int done = false;
    while (!done)
    {


        int size; /* the numer of rows*/
        std::cout << "Please enter the table size: ";
        std::cin >> size;
        /*print a size x size multiplication table */
        int row =1;
        while (row <= size) /* table has 10 rows.*/
        {
            int column =1;
            while (column <= size)
            {
                int product = row*column;
                std::cout << std::setw(4) << product << " ";
                column++;

            }

            std::cout << '\n';

            row++;
        }
        char yes;
        std::cout << "would you like to make a new table? (Y/N)" << "\n";

        bool cincleared = false;
        while (!cincleared)
        {
            if (!(std::cin >> yes))
            {
                std::cout << "annoying bastard error" << '\n';
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "would you like to make a new table? (Y/N)" << "\n";
                std::cin >> yes;
            }
            else
            { cincleared = true;

            }


        }
        switch(yes)
        {
            case 'y':
            case 'Y':
                break;

            case 'n':
            case 'N':
            default:
                done = true;
                break;
        }
    }
    return 0;
}
