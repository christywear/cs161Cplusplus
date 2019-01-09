#include <iostream>
#include <string>
#include <fstream> //file stream
#include <sstream> // switching string number to int
#include <iomanip> // for shapes
#include "functions.h" //function prototypes go here
#include "constants.h" // all constants go here, string text for user

/***********************************************************************/
//  Introducing the program to the user, gracefully leading into input //
/***********************************************************************/
void introstuff()
{
    std::cout << intro_1 << "\n";
    std::cout << intro_2 << "\n";
    std::cout << intro_3 << "\n";
    std::cout << intro_4;
return;
}


/***********************************************************************/
//  This function gets input from the user, stores it in whereto read  //
//    from Then returns it to main.                                    //
/***********************************************************************/
std::string getinput()
{
    bool data = false;
    std::string wheretoreadfrom;
    while(!data)
        {
            std::cin >> wheretoreadfrom;
            if (std::cin.fail())
            {
                std::cin.ignore(1000, '\n');
                std::cin.clear();
                continue;
            }
        data = true;
        }
return wheretoreadfrom;
}

/***********************************************************************/
//  This function clears the main variables used between each while    //
//  loop, during "processinputfile" function                           //
/***********************************************************************/
void clearallthethings(char& code, char& value, std::string& tempfix, std::string& grrr, int& rows, int& columns)
{
    code = 0;
    value = 0;
    tempfix.clear();
    grrr.clear();
    rows = 0;
    columns = 0;
    return;
}

/***********************************************************************/
//  This function reads the input file given by user, then feeds       //
//  the string "grrr" as if it's an array assigning proper position of //
//  single digit number, or character to a variable, which will be     //
//  passed to the individual functions and writes them to the output   //
//  file, closing and returning to main.                               //
/***********************************************************************/
void processinputfile(std::string wheretoreadfrom)
{
    int rows = 0, columns =0;
    char value;
    char code;
    std::string grrr;
    std::string tempfix;
    std::ifstream inFile;
    std::ofstream outFile;
    inFile.open(wheretoreadfrom.c_str());
    if ( !inFile.good() )
        {
		std::cout << proc_input_file_1 << "\n";
        }
        outFile.open("output.dat");
    if ( !outFile.good() )
        {
		std::cout << proc_input_file_2 << "\n";
        }

       while (! inFile.eof())
       {

                inFile >> code;

                inFile >> value;

                inFile >> rows;

                if (code == 'R')
                {
                    inFile >> columns;
                }

        std::cout << proc_input_file_3 << code << " " << value << " " << rows << " " << columns << "\n";
        switch (code)
            {
            case 'R':
            case 'r':
               outFile << drawRect(value,rows,columns);
               clearallthethings(code, value, tempfix, grrr, rows, columns);
               break;
            case 'S':
            case 's':
                outFile << draw_square(value,rows,columns);
                clearallthethings(code, value, tempfix, grrr, rows, columns);
                break;
            case 'D':
            case 'd':
                outFile << draw_diamond(value,rows,columns);
                clearallthethings(code, value, tempfix, grrr, rows, columns);
                break;
            case 'T':
            case 't':
                outFile << draw_triangle(value,rows,columns);
                clearallthethings(code, value, tempfix, grrr, rows, columns);
                break;
            case 'E':
            case 'e':
                std::cout << proc_input_file_4 << "\n";
                std::cout << proc_input_file_5 << "\n";
                clearallthethings(code, value, tempfix, grrr, rows, columns);
                break;
            default:
                std::cout << proc_input_file_6 << "\n";
                clearallthethings(code, value, tempfix, grrr, rows, columns);
                break;

            }

        }
        inFile.close();
        outFile.close();
return;
}

/***********************************************************************/
//  This function takes the passed by value of out_char which is       //
//  assigned a symbol, character or number by input file. the row and  //
//  column are used to determine the size of each functions shape.     //
//  As example :drawRect(& 3 2) &&                                     //
//                              &&                                     //
//                              &&                                     //
//                                                                     //
/***********************************************************************/
std::string drawRect(char out_char, int rows, int columns)
{
    std::string rect;
    for (int counter = 1; counter <= columns; counter++)
    {


        for (int counter = 1; counter <=rows; counter++)
        {
            rect= rect + out_char;
        }
        rect= rect + "\n";

    }
rect= rect + "\n\n\n";
return rect;
}

/***********************************************************************/
//  This function takes the passed by value of out_char which is       //
//  assigned a symbol, character or number by input file. the row and  //
//  column are used to determine the size of each functions shape.     //
//  As example :drawRect(& 3 2) &&                                     //
//                              &&                                     //
//                              &&                                     //
//                                                                     //
/***********************************************************************/
std::string draw_triangle(char out_char, int rows, int columns)
{

    std::string triangle;
    int out_counter = 0;
    for(int main_counter = 1; main_counter <= rows; main_counter++)
    {
        out_counter = 0;
        for(int space_count = 1; space_count <= rows-main_counter; space_count++)
        {
            triangle = triangle + "  ";
        }

        while(out_counter != 2*main_counter-1)
        {
            triangle = triangle + out_char + " ";
            out_counter++;
        }
        triangle = triangle + "\n";

}

    triangle = triangle + "\n\n\n";

return triangle;
}

/***********************************************************************/
//  This function takes the passed by value of out_char which is       //
//  assigned a symbol, character or number by input file. the row and  //
//  column are used to determine the size of each functions shape.     //
//  As example :drawRect(& 3 2) &&                                     //
//                              &&                                     //
//                              &&                                     //
//                                                                     //
/***********************************************************************/
std::string draw_square(char out_char, int rows, int columns)
{
    std::string square;
    for (int counter = 1; counter <= rows; counter++)
    {


        for (int counter = 1; counter <=rows; counter++)
        {
            square = square + out_char;
        }
        square = square + "\n";

    }
    square = square + "\n\n\n";
return square;
}

/***********************************************************************/
//  This function takes the passed by value of out_char which is       //
//  assigned a symbol, character or number by input file. the row and  //
//  column are used to determine the size of each functions shape.     //
//  As example :drawRect(& 3 2) &&                                     //
//                              &&                                     //
//                              &&                                     //
//                                                                     //
/***********************************************************************/
std::string draw_diamond(char out_char, int rows, int columns)
{ /* code retrieved and modified from
    http://www.codebind.com/cpp-tutorial/cpp-program-to-print-diamond-of-stars/
    */
  std::string diamond;
  int c, k, space = 1;
    space = rows - 1;

  for (k = 1; k<=rows; k++)
  {
    for (c = 1; c<=space; c++)
      diamond = diamond + " ";

    space--;

    for (c = 1; c<= 2*k-1; c++)
      diamond = diamond + out_char;

    diamond = diamond + "\n";
  }

  space = 1;

  for (k = 1; k<= rows - 1; k++)
  {
    for (c = 1; c<= space; c++)
      diamond = diamond + " ";

    space++;

    for (c = 1 ; c<= 2*(rows-k)-1; c++)
      diamond = diamond + out_char;

    diamond = diamond + "\n";
  }
    diamond = diamond + "\n\n\n";
    return diamond;
}

/***********************************************************************/
//  This function is extra, asks if the user would like to see what    //
//  got printed out to the file, by printing it on the screen.         //
//                                                                     //
/***********************************************************************/
void printout()
{
    bool checkinginput = false;
    char value;
    std::string grrr;
    std::ifstream inFile2;
    std::cout << print_out_1 << "\n";
    while (!checkinginput)
    {
        std::cin >> value;
        if (std::cin.fail())
        {
            std::cin.ignore(1000, '\n');
            std::cin.clear();
            continue;
        }
    checkinginput = true;
    }
    switch(value)
    {
    case 'Y':
    case 'y':

        inFile2.open("output.dat", std::ios::binary);
        if ( !inFile2.good() )
        {
		std::cout << print_out_2 << "\n";
        }
        while (getline(inFile2, grrr))
        {
            std::cout << grrr << "\n";
        }

        break;
    case 'N':
    case 'n':
        break;
    default:
        std::cout << print_out_3 << "\n";
        break;
    }
    inFile2.close();
return;
}

/***********************************************************************/
//  This function is extra, asks if the user would like to see start   //
//  the program over and read another file                             //
//                                                                     //
/***********************************************************************/
bool playagain()
{
    char value;
    bool done = true;
    bool switchdone = false;
    std::cout << play_again_1 << "\n";
    std::cin >> value;
    while (!switchdone)
    {
        switch(value)
            {
                case 'Y':
                case 'y':
                    switchdone = true;
                    break;
                case 'N':
                case 'n':
                    done = false;
                    switchdone = true;
                    break;
                default:
                    std::cout << play_again_2 << "\n";
                    break;
            }
    }
return done;
}


