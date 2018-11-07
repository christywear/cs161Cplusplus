#include <iostream>

using namespace std;

int area(int length = 3, int width = 4);

int main()
{
    int a, b;
    cout << "enter the width and length of your rectangle" << "\n";
    cin >> a >> b;

    cout << " your triangle has a default area of " << area() << "\n";
    cout << " your triangle has an area of " << area(a, b) << "\n";

    return 0;
}

int area(int length, int width)
{
    return length * width;
}
