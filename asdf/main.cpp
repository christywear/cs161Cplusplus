#include <iostream>
#include <windows.h>
using namespace std;

int main(void)
{
    HANDLE hStdout;
COORD destCoord;
hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

//position cursor at start of window
destCoord.X = 20;
destCoord.Y = 0;
SetConsoleCursorPosition(hStdout, destCoord);
    int rawr;
    cin >> rawr;
    cout << rawr << endl;
    return 0;
}
