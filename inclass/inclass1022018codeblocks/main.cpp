#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int x,y;
    int seed = time(0);
    srand(seed);
    x = rand() % 100 + 1;
    y = rand() % 11 + 20;


    cout << x << endl;
    cout << y << endl;


    return 0;
}
