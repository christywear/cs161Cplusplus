#include <iostream>
#include <string>
#include <limits>

std::string user_input = "";
int BUFF_SIZE_CLEAR = std::numeric_limits<std::streamsize>::max();
int user_temp =0;
int main()
{


    std::cout << "Hello, welcome to tempeture conversion" << '\n';

    do
    {
        std::cout << "In order to convert correctly, Please enter \"F2C\" to convert to C " << '\n';
        std::cout << "In order to convert correctly, Please enter \"C2F\" to convert to F " << '\n';
       std::cin >> user_input;
       if (user_input == "F2C" || user_input == "C2F")
       {
           continue;
       }
       std::cin.clear();
       std::cin.ignore(BUFF_SIZE_CLEAR,'\n');

    }
    while (user_input == "");

    do
    {
        std::cout << "Please enter the tempeture you wish to convert" << '\n';
        std::cin >> user_temp;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(BUFF_SIZE_CLEAR,'\n');
        }
    }
    while (std::cin.fail());

    if (user_input == "C2F"
    {

    }
    else
    {

    }
    std::cout << "Your tempeture converted using " << user_input << " is " << user_temp << '\n';
    return 0;
}
