#include <iostream>

using namespace std;

int main()
{
    string homework,cat,game;

    cout << "is there homework to do?" << "\n";
    cin >> homework;
    if (homework == "yes")
    {
        cout << "\nis there a cat?" << "\n";
        cin >> cat;
        if (cat == "yes")
        {
            cout << "\npet cat, your screwed temporarily" << "\n";
        }
        else
        {
            cout << "\ncheck schedule and do homework" << "\n";
        }
    }
    else
    {
        cout << "\ndo you want to play a game?" << "\n";
        cin >> game;
        if (game == "yes")
        {
            cout << "\n Play mitoses" << "\n";
        }
        else
        {
            cout << "\nWatch hulu\netflix" << "\n";
        }
    }

    return 0;
}
