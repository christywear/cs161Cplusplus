#include <string>
#include <iostream>

int main()
    {
    char choice;
    bool done = false;
    std::string yes_its_done = "Yay, move on to next homework.\nwait to be assigned more";
    std::string no_its_not = "Keep working, you got this, it's organised.";
    std::string little_brain = "Go play something de-stressing like mitosis, fist full of frags, stare at pretties in skyrim.\nponder staring mindlessly at water in underlight,\nmaybe sleep a little? if not keep working";
    std::string no_brain = "Go watch netflix, hulu, or amazon, probably should go to bed\nwhat time is it?";
    std::string destress_time;
    std::string netflix_or_game;
    char is_homework_done;

    while(!done)
        {
        std::cout << "\n\nIs homework done? (Y/N)" << "\n";
        std::cin >> is_homework_done;
        switch(is_homework_done)
           {
            case 'y':
            case 'Y':
            std::cout << yes_its_done << "\n";
            done = true;
            break;

            default:
            std::cout << no_its_not << "\n";
            break;
            }

        std::cout << "\n\nAre you trying to destress?" << "\n";
        std::cin >> destress_time;
        if (destress_time == "Yes" || destress_time == "yes" || destress_time == "YES" || destress_time == "y" || destress_time == "Y")
            {
            std::cout << "how much brain is left? (none | little)" << "\n";
            std::cin >> netflix_or_game;
            if (netflix_or_game == "none")
                {
                std::cout << no_brain << "\n";
                }
                else if (netflix_or_game == "little")
                    {
                    std::cout << little_brain << "\n";
                    }
            else
                {
                std::cout << "\n\nGO TO BED" << "\n";
                }
            }
        }
return 0;
}
