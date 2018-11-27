#include <iostream>

using namespace std;

void square_info(int &square_peri, int &square_area, int length);

int main()
{
int length, square_peri = 0, square_area = 0;


cout << "Lets calculate the perimeter and area of a square" << "\n";
cout << "please enter the size of a side" << "\n";
cin >> length;
square_info(square_peri, square_area, length);
cout << "the perm is " << square_peri << " the area is " << square_area << "\n";

return 0;
}

void square_info(int &square_peri, int &square_area, int length)
{
square_peri = length * 4;
square_area = length * 2;
return;
}
