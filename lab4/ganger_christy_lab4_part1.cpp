/* Written by, Christy Ganger
    CIS 161C++
    lab 4, part 1
    10/20/2018
*/

#include <iostream>
#include <string>


int main()
{
    bool done = false;
    std::string user_out_message = "\n\nWelcome to the factor factory \nplease enter your number you'd like factored";
    std::string factor_out = "\n\nThe factors of ";
    std::string quit_please = "\n\nDo you have any other numbers to factor? (Y/N)\n";
    char user_in_quit;
    int user_in_number = 0;
    int i = 1;
    /* start while loop until, user is ready to exit */
    while (!done)
    {
        /* Input, get user info */
           while (user_in_number < 1 || user_in_number > INT_MAX)
            {
            std::cout << user_out_message << "\n";
            std::cin.clear();
            std::cin.ignore();
            std::cin >> user_in_number;
            }


        /* Processing, calculate factors, output */
        std::cout << factor_out << user_in_number << " are:" << "\n";

        while (i <= user_in_number)
        {
            if(user_in_number % i == 0)
            {
                std::cout << i << "\n";

            }
        i++;
        }
        std::cout << quit_please << "\n";
        std::cin >> user_in_quit;
        switch(user_in_quit)
        {
            case 'n':
            case 'N':
                done = true;
                break;

            default:
                user_in_number = 0;
                break;
        }


    }

    return 0;
}
