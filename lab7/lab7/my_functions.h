#ifndef MY_FUNCTIONS_H_INCLUDED
#define MY_FUNCTIONS_H_INCLUDED

/*functions prototypes */
void generate_random_assign(char &compChoice);
void get_input_output_pc_choice(char, char &choice);
void do_comparison_out_result(char, char);
void play_again();

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
     }while(compChoice ==81);
}

/* Prompts user to get input for choice,
and informs user of pc's guess
*/
void get_input_output_pc_choice(char compChoice, char &choice)
{
    bool check=false;
    while(!check)
    {
       /* display instructions */
        std::cout << output_string_prompt << "\n";
        std::cout << output_string_prompt_1 << "\n";
       /*display instructions */

        /*modify to get input, validate,   return lower case r , p, s
        */
        std::cin >> choice;

        if (islower(choice))
        {
            choice=toupper(choice);
        }
        if (choice >= 80 && choice < 84)
        {
            if (choice == 81)
            {
                std::cin.clear();
                std::cin.ignore(ignore_info,'\n');
            }
            else
            {
                check = true;
                std::cout << output_computer_choice << compChoice << "\n";
            }
        }
        else
        {
            std::cout << output_wrong_input << "\n";
            std::cin.clear();
            std::cin.ignore(ignore_info,'\n');
        }
    }
}

/* does the math comparison to see who won,
and reports it back to user
*/
void do_comparison_out_result(char compChoice, char choice)
{
    if (choice == 82 && compChoice == 83)
            std::cout << output_player_wins << "\n";
        else if (choice == 83 && compChoice == 82)
            std::cout << output_computer_wins << "\n";
        else if (choice > compChoice)
            std::cout << output_player_wins << "\n";
        else if (compChoice > choice)
            std::cout << output_computer_wins << "\n";
        else
        std::cout << output_tie << "\n";
}

/* prompts user if they wish to play again, if so restarts program */
void play_again()
{

    char answer;
    bool switch_done = false;
    while(!switch_done)
    {
        std::cout << output_play_again << "\n";
        std::cin >> answer;
        switch(answer)
        {
        case 'N':
        case 'n':
            done = true;
            switch_done = true;
            break;

        case 'Y':
        case 'y':
            std::cout << output_yes_play_again << "\n\n\n\n";
            switch_done = true;
            break;

        default:
            std::cout << output_wrong_input << "\n";
            break;

        }
    }
}


#endif // MY_FUNCTIONS_H_INCLUDED
