#include <iostream>
#include <string>
#include <limits>

std::string wordlist = "turtle, tree, tin";
std::string input_word = "";

int main()
{
    std::cout << "Please pick a word from this list:" << '\n';
    std::cout << wordlist << '\n';
    std::cin >> input_word;

    if (input_word == "turtle")
        {
            std::cout << "You picked an animal." << '\n';
        }
    if (input_word == "tree")
        {
            std::cout << "You picked a plant." << '\n';
        }
    if (input_word == "tin")
        {
            std::cout << "You picked a mineral." << '\n';
        }
    if (input_word != "turtle" || input_word != "tree" || input_word != "tin")
        {
            std::cin.fail();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Error, that is not one of the listed words" << '\n';
        }
    return 0;
}
