#include <iostream>

using namespace std;

int main()
{
    string homework,cat,game;
    cout << "Do you have homework?" << "\n";
    cin >> homework;
    if (homework == "yes")
       {
        cout << "\nis there a cat?"<< "\n";
        cin >> cat;
        if (cat == "yes")
        {cout << "\nyou are screwed" << "\n";}
        else
        {cout << "\ndo homework" << "\n";
        }
       }
    else
    {
        cout << "\ndo you want to play a game?" << "\n";
        cin >> game;
        if (game == "yes")
        {
            cout << "\nPlay mitoses" << "\n";
        }
        else
        {
            cout << "\nwatch netflix or hulu" "\n";
        }

    }


    return 0;
}
