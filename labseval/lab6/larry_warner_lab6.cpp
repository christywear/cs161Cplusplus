#include <iostream>
// math functions
#include <cmath>


 using namespace std;

/* Program: Lab 6
 * ----------------------
 *Author: Lawrence Warner
 *Last Modified: 11/04/18
 *CS 161 C++
 *
 */

 // Define Variables
    char menu_choice;
    float circle_area, square_area, rectangle_area, triangle_area;
    float circle_radius, square_length, square_width, rectangle_height, rectangle_length, rectangle_width, triangle_height, triangle_width;
    char start_over;
    bool done = false;
    bool prog_reset = false;
    bool prog_end = false;

int main()
{
    while (!prog_end)
    {
        prog_reset = false;
        cout << " Areas of Geometric Shapes " << "\n" << endl;
        cout << " Please make a choice of: " << "\n" << endl;
        cout << " Circle: (1 or c) Square: (2 or s) Rectangle: (3 or r) Triangle: (4 or t)" << "\n" << endl;
        cin >> menu_choice;

        switch(menu_choice)
        {
            case '1':
            case 'c':
            case 'C':
            // fixed-point
                cout.setf(ios_base::fixed, ios_base::floatfield);
            // radius calculations
                cout << " You have chosen circle. " << "\n" << endl;
                cout << " Please enter your values to be computed: " << "\n" << endl;
                cout << " Radius: ";
                cin >> circle_radius;
                circle_area = circle_radius * circle_radius * 3.1416;
                cout << "\n The area of your circle is: " << circle_area << "\n" << endl;
                break;
            case '2':
            case 's':
            case 'S':
            // fixed-point
                cout.setf(ios_base::fixed, ios_base::floatfield);
            // Square calculations
                cout << " You have chosen square. " << "\n" << endl;
                cout << " Please enter your values to be computed: " << "\n" << endl;
                cout << " Length : ";
                cin >> square_length;
                cout << " Width : ";
                cin >> square_width;
                square_area = square_length * square_width;
                cout << "\n The area of your square is: " << square_area << "\n" << endl;
                break;
            case '3':
            case 'r':
            case 'R':
            // fixed-point
                cout.setf(ios_base::fixed, ios_base::floatfield);
            // Rectangle calculations
                cout << " You have chosen rectangle. " << "\n" << endl;
                cout << " Please enter your values to be computed: " << "\n" << endl;
                cout << " Length : ";
                cin >> rectangle_length;
                cout << " Width : ";
                cin >> rectangle_width;
                rectangle_area = rectangle_length * rectangle_width;
                cout << "\n The area of your rectangle is: " << rectangle_area << "\n" << endl;
                break;
            case '4':
            case 't':
            case 'T':
            // fixed-point
                cout.setf(ios_base::fixed, ios_base::floatfield);
            // Triangle calculations
                cout << " You have chosen triangle. " << "\n" << endl;
                cout << " Please enter your values to be computed: " << "\n" << endl;
                cout << " Height : ";
                cin >> triangle_height;
                cout << " Width : ";
                cin >> triangle_width;
                triangle_area = triangle_height * triangle_width * 0.5;
                cout << "\n The area of your triangle is: " << triangle_area << "\n" << endl;
                break;
            default:
                cout << " Invalid entry " << endl;
        }
            // ask user to start over
            while (!prog_reset)
                  {
                      prog_reset = false;
                        cout << " Would you like to another one? (Y/N) \n" << endl;
                        cin >> start_over;
                    switch (start_over)
                    {
                        case 'n':
                        case 'N':
                                cout << "Thanks for using my program! \n" << endl;
                            // exit switch loop
                                prog_reset = true;
                            // ends game loop
                                prog_end = true;
                            break;
                        case 'Y':
                        case 'y':
                            // exit switch loop
                                prog_reset = true;
                            {
                            // Flush the output stream
                                cout.flush();
                                cin.clear();
                                cin.ignore();
                            }
                            break;

                        default:
                            cout << " That's not valid input, please type Y for yes, or N for no" << "\n";

                            break;
                    }


                  }

    }


    return 0;
}
