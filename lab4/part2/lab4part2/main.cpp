/* Written by, Christy Ganger
   CIS161C++
   Lab4, Part 2
   10/20/2018
*/

#include <iostream>
#include <string>

int main()
{
    bool done = false;
    int user_numbers = 0, user_smallest = 0, user_largest = 0, countcheck = 0;
    std::string user_intro = "\n\n\nLets figure out which numbers are the smallest and biggest\nOne at a time, please enter your series of numbers press enter after each.\nType the number 0 to exit";
    std::string out_user_smallest = "Your smallest number is: ";
    std::string out_user_largest = "Your largest number is: ";
    std::string out_countcheck = "This is how many numbers where entered so far: ";
    std::string out_error_input = "This number was either above 100 or below zero, please try again";
    while (!done == true)
        {
            std::cout << user_intro << "\n";
            std::cin >> user_numbers;
            while(user_numbers < 0 || user_numbers > 100)
            {
                std::cout << out_error_input << "\n";
                std::cin.clear();
                std::cin.ignore();
                std::cin >> user_numbers;

            }
            if (user_numbers == 0)
            {
                done = true;
                continue;
            }

            if (countcheck == 0)
            {
                user_smallest = user_numbers;
                user_largest = user_numbers;
            }
            if (user_numbers < user_smallest)
            {
                user_smallest = user_numbers;
            }
            if (user_numbers > user_largest)
            {
                user_largest = user_numbers;
            }

            countcheck++;
            std::cout << out_countcheck << countcheck << "\n";
            std::cout << out_user_smallest << user_smallest << "\n";
            std::cout << out_user_largest << user_largest << "\n";
        }
}
