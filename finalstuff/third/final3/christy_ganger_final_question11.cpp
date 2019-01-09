#include <iostream>

using namespace std;

bool is_prime(int value); //needs ;

// This program prints out the first 10 odd primes

int main()

{

    int value = 3;
    int counter = 1;
    while(counter <= 10)

    {
        if (is_prime(value))

        {
            cout << counter << " " << value << endl;
            counter++;
        }
        value +=2;
    }
    return 0;
}

bool is_prime(int value)
{
    bool done = false;

    for(int i = 3; i <= value; i+=2)
    {
    if (value % i == 0 )
    {
        done = true;

    }
    else
    {
        done = false;

    }

    }
return done;
}
