#include <iostream>

int multiply(int x = 3, int y = 0); /* needs default for y, or to switch places for argument throughout, has a int return, so needs to be int not void..*/

int main()
{
    int length, width, area, area2; /*need area2*/

    std::cout << "Enter length and width of a rectangle "; /* needs std::cout */
    std::cin >> length, width; /* needs std::cin */

    area = multiply(length, width);

    std::cout << "The area is " << area << std::endl; /* needs std::cout std::endl */

    area2 = multiply(width);

    std::cout << "The second area is " << area2 << std::endl; /* needs std::cout std::endl*/

    return 0;
}
int multiply(int x, int y) /* putting default here, makes it that value, please remove ; , has a int return, so needs to be int not void. */
{
    return x * y;
}
