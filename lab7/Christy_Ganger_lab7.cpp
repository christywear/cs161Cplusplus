/* Author : Christy Ganger
Version: 1
Date: 11/4/2018
LAB : 7
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char choice, compChoice;

/*functions */
void generate_random_assign(char &compChoice);
void get_input_output_pc_choice(char, char &choice);
void do_comparison_out_result(char, char);

int main()
{
        /*call functions*/
        generate_random_assign(compChoice);
        get_input_output_pc_choice(compChoice, choice);
        do_comparison_out_result(compChoice, choice);
    return 0;
}

/*Generates a random number between 80 and 83
Then takes the capital char values PQRS,
Assigns to compChoice, And repeats loop if = to Q
so we only get PRS for Paper rock Scissors
*/
void generate_random_assign(char &compChoice)
{
    srand( static_cast<unsigned>(time( NULL )) );
    do
    {
        compChoice = rand() % 4 + 80;
    cout << compChoice << "\n";
    int grr;
    grr = compChoice;
    cout << grr << "\n";
    }while(compChoice ==81);
}

/* Prompts user to get input for choice,
and informs user of pc's guess
*/
void get_input_output_pc_choice(char compChoice, char &choice)
{
    cout << "Enter your choice" << endl;
    cout << "R for rock, P for paper, S for scissors: ";
    cin >> choice;
    cout << "Computer chose " << compChoice << endl;
}

/* does the math comparison to see who won,
and reports it back to user
*/
void do_comparison_out_result(char compChoice, char choice)
{
    if (choice == 82 && compChoice == 83)
            cout << "You win!" << endl;
        else if (choice == 83 && compChoice == 82)
            cout << "Computer wins!" << endl;
        else if (choice > compChoice)
            cout << "You win!" << endl;
        else if (compChoice > choice)
            cout << "Computer wins!" << endl;
        else
        cout << "Tie" << endl;
}
