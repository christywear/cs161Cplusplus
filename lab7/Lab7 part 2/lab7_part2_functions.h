#ifndef LAB7_PART2_FUNCTIONS_H_INCLUDED
#define LAB7_PART2_FUNCTIONS_H_INCLUDED
/*Intro!*/
void displayinstructions()
{
    std::cout << welcome1 << "\n";
    std::cout << welcome2 << "\n";
    std::cout << welcome3 << "\n";
    std::cout << welcome4 << "\n";

}

/*srand func*/
int getNumber(int func_rand_min, int func_rand_max)
{
        int func_rand_number;
        srand (time(NULL));
        func_rand_number = rand()%func_rand_max + func_rand_min;
        /*
        Line for debugging
        std::cout << "DEBUG::Your random number is " << func_rand_number << "\n";
        */
        return (func_rand_number);
}

/*gets move from user, checks it, returns it */
int getMove(int func_min_number, int func_max_number)
{
    int userguess;
    bool input_good = false;
    do
    {
        std::cin >> userguess;
        if (!std::cin)
            {

                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cout << out_valid_num_error << "\n";
                /*
                Line for debugging
                std::cout << "DEBUG:: loop broken 85" << "\n";
                */
                continue;
            }

        if (userguess > func_max_number || userguess < func_min_number)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cout << out_valid_num_error << "\n";
                continue;
                /*
                Line for debugging
                std::cout << "DEBUG:: LOOP BROKEN 98" << "\n";
                */
            }
        else
            {
                input_good = true;
            }

    }while (!input_good);

    return (userguess);

}

/* user play func, decides if user needs to enter higher or lower num or win */
bool Winnerplease(int func_userguess, int func_rand)
{
    bool more_input = false;
    static int counter = 1;

        if (func_userguess < func_rand)
            {
                std::cout << out_user_guess_higher<< "\n";
                counter++;
                more_input = true;
            }
        if (func_userguess > func_rand)
            {
                std::cout << out_user_guess_lower << "\n";
                more_input = true;
                counter++;
            }
        if (func_userguess == func_rand)
            {
                std::cout << out_user_is_winner << "\n" ;
                std::cout << out_count_number_1 << counter << out_count_number_2 << "\n";
                more_input = false;
                counter++;
            }

    return (more_input);
}

/*play again loop to ask user if they want to play again, verify input, return result */
bool playAgain()
{
    char userchoice;
    bool return_done = false;
    bool done_checking_user_info = false;
    do
    {
        std::cout << out_user_play_again << "\n";
        std::cin >> userchoice;
        switch(userchoice)
        {
        case 'y':
        case 'Y':
            done_checking_user_info = true;
            break;
        case 'n':
        case 'N':
            done_checking_user_info = true;
            return_done = true;
            break;
        default:
            std::cout << out_bad_input << "\n";
            break;
        }
    }while (!done_checking_user_info);
    return (return_done);

}
#endif // LAB7_PART2_FUNCTIONS_H_INCLUDED
