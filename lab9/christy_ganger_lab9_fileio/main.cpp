#include <iostream>
#include <iomanip> // for shapes
using namespace std;
void drawRect(char out_char, int rows, int columns);
void draw_triangle(char out_char, int rows, int columns);
void draw_square(char out_char, int rows, int columns);
void draw_diamond(char out_char, int rows, int columns);
bool playagain();
int main()
{
    do
    {
        int rows = 0, columns =0;
        char value;
        cout << "Enter your character, row and column values" << endl;
        cin >> value >> rows >> columns;
        drawRect(value,rows,columns);
        draw_triangle(value,rows,columns);
        draw_square(value,rows,columns);
        draw_diamond(value,rows,columns);

    }while(playagain());
    return 0;
}

/*here you would have code that outputs a shape using out_char for example,
drawRect(&,3,2)
  &&
  &&
  &&
  */
void drawRect(char out_char, int rows, int columns)
{
    for (int counter = 1; counter <= columns; counter++)
    {


        for (int counter = 1; counter <=rows; counter++)
        {
            cout << out_char;
        }
        cout << "\n";

    }

return;
}

void draw_triangle(char out_char, int rows, int columns)
{

    int out_counter = 0;
    for(int main_counter = 1; main_counter <= rows; main_counter++)
    {
        out_counter = 0;
        for(int space_count = 1; space_count <= rows-main_counter; space_count++)
        {
            cout << "  ";
        }

        while(out_counter != 2*main_counter-1)
        {
            cout << out_char << " ";
            out_counter++;
        }
        cout << "\n";

}
    /*cout << "Hey look a triangle" << "\n";
    int triangle_width = rows;
    int grr = rows;
    for (int counter = 1; counter <= columns; counter++)
    {



        for (int counter = 1; counter <= rows; counter++)
       {


            cout << setw(triangle_width) << out_char;

       }


        cout << "\n";
        triangle_width++;
        */
return;
}

void draw_square(char out_char, int rows, int columns)
{
    cout << "Hey look a square!" << "\n";
return;
}

void draw_diamond(char out_char, int rows, int columns)
{
    cout << "hey look a diamond!" << "\n";
    return;
}

bool playagain()
{
    char value;
    bool done = true;
    bool switchdone = false;
    cout << "would you like to play again?";
    cin >> value;
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
                    cout << "Please type that again";
                    break;
            }
    }
return done;
}

