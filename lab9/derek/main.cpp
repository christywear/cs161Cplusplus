#include <iostream>
#include <fstream>

using namespace std;

void drawTriangle (ofstream& outfile, char out_char, int rows, int columns);

int main()
{
    char code;
    char out_char;
    int rows;
    int columns;
    bool isDone = false;

	ifstream infile;
	infile.open("infile.txt");

	ofstream outfile;
	outfile.open ("outfile.txt", ios::app);

	infile>> code;
	infile>> out_char;
	infile>> rows;
	infile>> columns;



while (!isDone){
    switch (code)
        case 'T':
            if( outchar == '&'){
                drawTriangle(outfile, out_char, rows, columns);
                break;
            }
            else
                drawAnotherTriangle();
                break;

        case 'S':
                drawSquare ();
                break;

        case 'R':
            if ( outchar == '*'){
                drawRectangle();
                break;
            }
             else
                drawAnotherRectangle();
                break;

        case 'D':
            if( outchar == '$'){
                drawDiamond();
                break;
            }
            else
                drawAnotherDiamond();
                break;

        case 'E':
                isDone = true;
                break;

}


infile.close();
outfile.close();
return 0;
}

//Print out Triangle in &
void drawTriangle (ofstream& outfile, char out_char, int rows, int columns)
{
    for (int i = 1; i <= 4; i++ )
    {
        cout << endl;
    for (int j = 1; j <= 4; j++ )
    {


        outfile << "&";
        cout << "&" ;
    }
    }
}




/*

void square (ofstream& outfile, char out_char, int rows, int columns)
{
    for (int i = 1; i <= 4; i++ )
    {
        cout << endl;
    for (int j = 1; j <= 4; j++ )
    {


        outfile << "&";
        cout << "&" ;
    }
    }
}
*/

