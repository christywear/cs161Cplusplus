/* Author: Christy ganger
class CS161c++
date: 10/28/2018
 Instructions:
 Ask the user if they want to convert from F to C or C to F.  Input either an "F2C" or "C2F".  Get a temperature from user.  Output appropriate conversion.  If user wants, repeat.

  F = (C * 9.0 / 5.0 ) + 32.0;

  C = (F - 32.0) * 5.0 / 9.0;
  */


#include <iostream>
#include <string>
#include <limits>

void get_type_of_convert_func();
void get_and_check_temp_input();
void do_math_conversion();
void do_exit_switch();

std::string user_input_CorF;
std::string F2C = "(C*9.0/8.0) +32.0";
std::string C2F = "(F-32)* 5.0 / 90";
double C = 0.0;
double F = 0.0;
char would_you_like_another;
double user_defined_temp;
bool done = false;
bool fix_do_loop = false;
bool switch_drinks_please = false;

const long BUFF_SIZE = std::numeric_limits<std::streamsize>::max();

int main()
{
    while(!done)
    {
        std::cout << "Would you like to convert C to F (please enter C2F)" << "\n";
        std::cout << "Or would you like to convert F to C (please enter F2C)" << "\n";
        /*First validate input sequence*/
        get_type_of_convert_func();
        std::cout << "Thank you, Now please enter the degree's you wish to convert:" << "\n";
        get_and_check_temp_input();
        do_math_conversion();
        do_exit_switch();


    }


    return 0;
}

void get_type_of_convert_func()
{
     do
        {
            std::cin >> user_input_CorF;

            if (user_input_CorF == "C2F")
            {
                std::cout << "Celsius to fahrenheit selected" << "\n";
                fix_do_loop = true;
                continue;
            }
            if (user_input_CorF == "F2C")
            {
                std::cout << "fahrenheit to Celsius selected" << "\n";
                fix_do_loop = true;
                continue;
            }

                std::cout << "Bad input, please enter C2F or F2C " << "\n";
                std::cin.clear();
                std::cin.ignore(BUFF_SIZE);

        }
        while (!fix_do_loop);
}

void get_and_check_temp_input()
{
    do
        {
            std::cin >> user_defined_temp;
            if (std::cin.fail())
            {
                std::cout << "Bad Input, Please enter a temperature in number format." << "\n";
                std::cin.clear();
                std::cin.ignore(BUFF_SIZE);
            }
        }
        while (std::cin.fail());
}

void do_math_conversion()
{
    if (user_input_CorF == "C2F")
        {
            C = user_defined_temp;
            user_defined_temp = (C*9.0/8.0) +32.0;
            std::cout << "The temperature you entered once converted is:" << user_defined_temp << "\n";

        }

        else
        {
            F = user_defined_temp;
            user_defined_temp = (F-32)* 5.0 / 90;
            std::cout << "The temperature you entered once converted is:" << user_defined_temp << "\n";
        }

}

void do_exit_switch()
{
    while (!switch_drinks_please)
        {
            std::cout << "Would you like to do another conversion? (Y/N)" << "\n";
            std::cin >> would_you_like_another;
            switch (would_you_like_another)
            {
            case 'y':
            case 'Y':
                C = 0.0;
                F = 0.0;
                user_defined_temp = 0.0;
                user_input_CorF = "";
                fix_do_loop = true;
                switch_drinks_please = true;
                break;

            case 'n':
            case 'N':
                C = 0.0;
                F = 0.0;
                user_defined_temp = 0.0;
                user_input_CorF = "";
                done = true;
                fix_do_loop = true;
                switch_drinks_please = true;
                break;

            default:
                std::cout << "Bad input, please try again";
                break;

            }
        }
}
