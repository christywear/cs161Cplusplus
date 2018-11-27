#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    for(int i=0; i<3; i++)
    {
        x+=5*i;
            cout << "x is " << x << "\n";
            cout << "i is " << i << "\n";
    }


    return 0;
}
