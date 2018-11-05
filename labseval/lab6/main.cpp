/*
Author: Christy Ganger
Date : 11/4/2018
version: 1
Lab 6 - Introduction to Functions
Class : CS 161C++
*/

#include <iostream>
#include <string>

/* prototyping switch thingies */
float user_circle(float);
float user_square(float);
float user_rectangle(float user_rectangle_length, float user_rectangle_width);
float user_triangle(float user_triangle_height, float user_triangle_width);
void user_error();
void user_error_leave();
void reset_all_the_things();

/*const strings for the program */
const std::string intro_out1 = "Hello! we have four shapes in stock! Would you like:";
const std::string intro_out_for_input = "C for Circle, S for Square, R for Rectangle, or T for Triangle";
const std::string user_circle_out = "great! let's make a circle! \n First we need to define the area.";
const std::string user_circle_out_for_input = "Please enter the Radius of your new circle:";
const std::string user_circle_area_out = "Your new circle has an area of ";
const std::string user_square_out = "great! let's make a square! \n First we need to define the area.";
const std::string user_square_out_for_input = "Please enter the length of the sides:";
const std::string user_square_area_out = "Your new square has an area of ";
const std::string user_rectangle_out = "great! let's make a rectangle! \n First we need to define the area.";
const std::string user_rectangle_out_for_input = "Please enter the length of the rectangle:";
const std::string user_rectangle_out_for_input2 = "Please enter the width of the rectangle:";
const std::string user_rectangle_area_out = "Your new rectangle has an area of ";
const std::string user_triangle_out = "great! let's make a Triangle! \n First we need to define the area.";
const std::string user_triangle_out_for_input = "Please enter the height of your new triangle:";
const std::string user_triangle_out_for_input2 = "Please enter the width of your new triangle:";
const std::string user_triangle_area_out = "Your new Triangle has an area of ";
const std::string user_error_out = "ERROR, You requested a shape we don't have.";
const std::string user_error_leave_out = "Invalid answer Y or N please.";
const std::string switch_exit_out = "Would you like to make another shape? (Y)es  or  (N)o";
const float PI = 3.1416;

/* variables */
char another_shape;
char user_defined_shape;
float user_circle_radius = 0.0;
float user_square_side = 0.0;
float user_rectangle_length = 0.0;
float user_rectangle_width = 0.0;
float user_triangle_height = 0.0;
float user_triangle_width = 0.0;
float user_circle_area = 0.0;
float user_square_area = 0.0;
float user_rectangle_area = 0.0;
float user_triangle_area = 0.0;
bool done = false;
bool exit_no_more_shapes = false;

int main()
{
    do
    {
        while(!done)
        {
            /*
                main central station loop of the game
                spit out info, get info
                pick with letter which shape switch
            */
            std::cout << intro_out1 << "\n";
            std::cout << intro_out_for_input << "\n";
            std::cin >> user_defined_shape;
            switch(user_defined_shape)
            {
            case 'c':
            case 'C':
                /*spit out info, get info for circle , sent to func for calc, print out*/
                std::cout << user_circle_out << "\n";
                std::cout << user_circle_out_for_input << "\n";
                std::cin >> user_circle_radius;
                std::cout << user_circle_area_out << user_circle(user_circle_radius) << "\n";
                done = true;
                break;

            case 's':
            case 'S':
                /*spit out info, get info for square , sent to func for calc, print out*/
                std::cout << user_square_out << "\n";
                std::cout << user_square_out_for_input << "\n";
                std::cin >> user_square_side;
                std::cout << user_square_area_out << user_square(user_square_side) << "\n";
                done = true;
                break;

            case 'r':
            case 'R':
                /*spit out info, get info for rectangle , sent to func for calc, print out*/
                std::cout << user_rectangle_out << "\n";
                std::cout << user_rectangle_out_for_input << "\n";
                std::cin >> user_rectangle_length;
                std::cout << user_rectangle_out_for_input2 << "\n";
                std::cin >> user_rectangle_width;
                std::cout << user_rectangle_area_out << user_rectangle(user_rectangle_length, user_rectangle_width) << "\n";
                done = true;
                break;

            case 't':
            case 'T':
                /*spit out info, get info for triangle , sent to func for calc, print out*/
                std::cout << user_triangle_out << "\n";
                std::cout << user_triangle_out_for_input << "\n";
                std::cin >> user_triangle_height;
                std::cout << user_triangle_out_for_input2 << "\n";
                std::cin >> user_triangle_width;
                std::cout << user_triangle_area_out << user_triangle(user_triangle_height, user_triangle_width) << "\n";
                done = true;
                break;

            default:
                user_error();
                break;
            }
        }


      /* the switch to get out of the gate n exit the game or make new one */
      std::cout << switch_exit_out << "\n";
      std::cin >> another_shape;
      switch(another_shape)
      {
          case 'y':
          case 'Y':
            reset_all_the_things();
            break;

          case 'n':
          case 'N':
            reset_all_the_things();
            exit_no_more_shapes=true;
            break;

          default:
            user_error_leave();
            break;
       }
    }while (!exit_no_more_shapes);
    return 0;
}

/* Function city, all extra functions live here */

    /* circle function: For a circle, get the radius (area=radius*radius*PI) */
float user_circle(float user_circle_radius)
{
    float answer = user_circle_radius * user_circle_radius * PI;
    return answer;
}

    /*square function: For a square, get length of a side (area=side*side) */
float user_square(float user_square_side)
{
    float answer = user_square_side * user_square_side;
    return answer;
}

    /*rectangle function: For a rectangle, get the height and width (area=height*width) */
float user_rectangle(float user_rectangle_length, float user_rectangle_width)
{
    float answer = user_rectangle_length * user_rectangle_width;
    return answer;
}

    /*triangle function: For a triangle, get the height and width (area = height * width * 0.5) */
float user_triangle(float user_triangle_height, float user_triangle_width)
{
    float answer = user_triangle_height * user_triangle_width * 0.5;
    return answer;
}

    /*Error function : for first switch */
void user_error()
{
    std::cout << user_error_out << "\n\n\n\n";

}

    /*Error function: for second switch */
void user_error_leave()
{
    std::cout << user_error_leave_out << "\n\n\n\n";
}

    /* Reset function, to clear old settings and values to prevent problems*/
void reset_all_the_things()
{
    user_circle_radius = 0.0;
    user_square_side = 0.0;
    user_rectangle_length = 0.0;
    user_rectangle_width = 0.0;
    user_triangle_height = 0.0;
    user_triangle_width = 0.0;
    user_circle_area = 0.0;
    user_square_area = 0.0;
    user_rectangle_area = 0.0;
    user_triangle_area = 0.0;
    done = false;

}
