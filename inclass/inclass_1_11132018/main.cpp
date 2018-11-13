#include <iostream>

using namespace std;

void directions();
int getValue();
bool isPrime(int);
bool repeat();

int main()
{
    int value;

    do
    {
        directions();

        value = getValue();

        if ( isPrime(value) )
            cout << value << " is a prime\n";
        else
            cout << value << " is not a prime\n";
    } while ( repeat() );


    // drivers to test functions
    /*
    directions();
    cout << " get value returned " << getValue() << endl;
    cout << " is prime of 33 " << isPrime(33) << endl;
    cout << " repeat returned " << repeat() << endl;
    */
    return 0;
}
// stubs
void directions() { cout << " do something\n"; }
/*int getValue() { return 42; } */
/*bool isPrime(int value) { return true; } */
bool repeat () { return false; }
// functions
/*
void directions()
{

}
*/
int getValue()
{
    int value;
    bool donegettingval = false;
    do
        {
            cin >> value;
            if (!cin)
            {
                cout << "enter a valid int" << "\n";
                cin.clear();
                cin.ignore(1000,'\n');
            }
            else
            {
                donegettingval = true;
            }
    }while(!donegettingval);
    return value;
}

bool isPrime(int value)
{
    bool blah = false;
    int counter = 1;
    int red = 0;
    while (counter <= value)
    {
        /* debugg
        cout << "counter is " << counter << "\n";
        */
        if (value % counter ==0)
            {red++;}
        counter++;

    }
    if (red == 2)
        {
            /* debug
            cout << " red is " << red << "\n";
            */
            blah = true;
        }
    /*debug
    cout << " red is " << red << "\n";
    */
    return blah;
}
/*
}

bool repeat()
{

}
*/
