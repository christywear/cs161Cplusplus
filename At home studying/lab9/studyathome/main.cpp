#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;
    infile.open("game.CLI", ios::binary);
    outfile.open("output.txt");
    if(infile.fail())
    {
        cout << "The input file didn't work" << "\n";

    }
    if(outfile.fail())
    {
        cout << " The output file didn't work" << "\n";
    }
        else
    {
        string buffer;
        while(getline(infile, buffer))
        {
            cout << buffer << "\n";
            outfile << buffer << "\n";
        }
        infile.close();
        infile.clear();
        outfile.close();
        outfile.clear();
    }

    return 0;
}
