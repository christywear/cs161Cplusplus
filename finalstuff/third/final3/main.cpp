#include <iostream>

using namespace std;

bool is_prime(int value); //needs ;

// This program prints out the first 10 odd primes

int main()

{

    int value = 1;
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
    int prime = 1;
    for(int i = 2; i <= value / 2; i++)
    {

        if (value % i == 0 )
        {
            prime = 0;
            done = false;
            break;
        }

        if (prime != 0);
        {
            done = true;
        }
    }
return done;
}
