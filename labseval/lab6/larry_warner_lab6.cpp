#include <iostream>
// math functions
#include <cmath>
// Choice without return key
#include <conio.h>


 using namespace std;

/* Program: Lab 6
 * ----------------------
 *Author: Lawrence Warner
 *Last Modified: 11/04/18
 *CS 161 C++
 *
 */

// Variables
    float circle_radius;
    float square_length;
    float square_width;
    float rectangle_height;
    float rectangle_length;
    float rectangle_width;
    float triangle_height;
    float triangle_width;
    char start_over;
    bool done = false;
    bool prog_reset = false;
    bool prog_end = false;
    void invale_d();
    void exit_out();


 // Switch
    char menu_choice;
    float circle_area(float circle_radius);
    float square_area(float square_length, float square_width);
    float rectangle_area(float rectangle_height, float rectangle_length, float rectangle_width);
    float triangle_area(float triangle_height, float triangle_width);


 // Const Strings
    // Intro
    const string intro_1 = " Areas of Geometric Shapes ";
    const string intro_2 = " Please make a choice of: ";
    const string intro_3 = " Circle: (1 or c) Square: (2 or s) Rectangle: (3 or r) Triangle: (4 or t)";
    // Circle
    const string circle_choice = " You have chosen circle. ";
    const string circle_out = "The area of your circle is: ";
    // Square
    const string square_choice = " You have chosen Square. ";
    const string square_out = " The area of your Square is: ";
    // Rectangle
    const string rectangle_choice = " You have chosen Rectangle. ";
    const string rectangle_out = " The area of your Rectangle is: ";
    // Triangle
    const string triangle_choice = " You have chosen Triangle. ";
    const string triangle_out = " The area of your Triangle is: ";
    // General Statements
    const string radius_out = " Radius: ";
    const string height_out = " Height : ";
    const string lenght_out = " Length: ";
    const string width_out = " Width: ";
    const string value_out = " Please enter your values to be computed: ";
    const string new_line = "\n";
    // Const PI
    const float PI = 3.14159;
    // Restart or Exit App
    const string restart_app = " Would you like to another one? (Y/N)";

int main()
{
    while (!prog_end)
    {
        // Introduction
        prog_reset = false;
        cout << intro_1 << new_line << endl;
        cout << intro_2 << new_line << endl;
        cout << intro_3 << new_line << endl;
        char menu_choice = _getch();

        switch(menu_choice)
        {
            case '1':
            case 'c':
            case 'C':
            // fixed-point
                cout.setf(ios_base::fixed, ios_base::floatfield);
            // radius statements
                cout << circle_choice << new_line << endl;
                cout << value_out << new_line << endl;
                cout << radius_out;
                cin >> circle_radius;
                cout << new_line << circle_out << circle_area(circle_radius) << new_line << endl;
                break;
            case '2':
            case 's':
            case 'S':
            // fixed-point
                cout.setf(ios_base::fixed, ios_base::floatfield);
            // Square calculations
                cout << square_choice << new_line << endl;
                cout << value_out << new_line << endl;
                cout << lenght_out;
                cin >> square_length;
                cout << width_out;
                cin >> square_width;
                cout << new_line << square_out << square_area(square_length, square_width) << new_line << endl;
                break;
            case '3':
            case 'r':
            case 'R':
            // fixed-point
                cout.setf(ios_base::fixed, ios_base::floatfield);
            // Rectangle calculations
                cout << rectangle_choice << new_line << endl;
                cout << value_out << new_line << endl;
                cout << lenght_out;
                cin >> rectangle_length;
                cout << width_out;
                cin >> rectangle_width;
                cout << new_line << rectangle_out << rectangle_area(rectangle_height, rectangle_length, rectangle_width) << new_line << endl;
                break;
            case '4':
            case 't':
            case 'T':
            // fixed-point
                cout.setf(ios_base::fixed, ios_base::floatfield);
            // Triangle calculations
                cout << triangle_choice << new_line << endl;
                cout << value_out << new_line << endl;
                cout << height_out;
                cin >> triangle_height;
                cout << width_out;
                cin >> triangle_width;
                cout << triangle_out << triangle_area(triangle_height, triangle_width) << new_line << endl;
                break;
            default:
                invale_d();
                cout << endl;
        }
            // ask user to start over
            while (!prog_reset)
                  {
                        cout << restart_app << new_line << endl;
                        cin >> start_over;
                    switch (start_over)
                    {
                        case 'n':
                        case 'N':
                                exit_out();
                                cout << new_line << endl;
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
                            invale_d();
                            cout << new_line;

                            break;
                    }


                  }

    }


    return 0;

// Radius function: For a circle, get the radius (area=radius*radius*PI)
}
float circle_area(float circle_radius)
{
    float answer = circle_radius * circle_radius * PI;
    return answer;
}
// Square function: For a square, get length of a side (area=side*side)
float square_area(float square_length, float square_width)
{
    float answer = square_length * square_width;
    return answer;
}
// Rectangle function: For a rectangle, get the height and width (area=height*width)
float rectangle_area(float rectangle_height, float rectangle_length, float rectangle_width)
{
    float answer = rectangle_length * rectangle_width;
    return answer;
}
// Triangle For a triangle, get the height and width (area = height * width * 0.5)
float triangle_area(float triangle_height, float triangle_width)
{
    float answer = triangle_height * triangle_width * 0.5;
    return answer;
}
// User Error Input
void invale_d()
{
    cout << " Invalid entry, please try again! ";
}
void exit_out()
{
    cout << "Thanks for using my program! ";
}


