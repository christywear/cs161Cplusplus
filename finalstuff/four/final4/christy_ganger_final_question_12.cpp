/*
written by christy ganger cs161c++
final, last question.

Program Description

Write a simple program that asks the user for a count of how many numbers will be input, then inputs that many integers, adds them up, and calculates the average.

You must write a function that is used to input each number and verifies that it is within the range 1 to 99. If it is outside that range, notify the user and ask them to enter a new value. Likewise, check for non-numbers, notify the user of invalid input and get a new value entered.

You must also use a single function to perform the processing and provide both the average and total to the main.

Main should look like this

      ask for number of values
      get the number of values to be entered

      call a function to get that many values, sum them, and return the total and average

      display the total and average

your two functions should be

      1) input a number, validate it, and return it

      2) pass in a count, read in that many numbers, sum them, return the total and average
      */
#include <iostream>

using namespace std;
void input_main_func(int& numbers, int (&numbers2)[1024]);
void sum_and_average(int numbers, int (&numbers2)[1024], int& sum, int& average);
int main()
{
    int numbers=0, sum= 0, average = 0;
    int numbers2[1024];

    input_main_func(numbers, numbers2);
    sum_and_average(numbers, numbers2, sum, average);

    cout << " the sum is " << sum << "\n";
    cout << " the average is " << average << "\n";
    return 0;
}

void input_main_func(int& numbers,int (&numbers2)[1024])
{
    int j;
    bool done = false;
    cout << "How man numbers would you like to input? up to 1024 are available." << "\n";
    cin >> numbers;
    for(j = 0; j < numbers; j++)
    {
        done = false;
        cout << "Please enter the number you'd like recorded, from 1 to 99 " << "\n";
        while (!done)
        {
            cin >> numbers2[j];
            if (cin.fail())
            {
                cout << "Error on input type, please enter a number from 1 to 99 " << "\n";
                cin.ignore(10000, '\n');
                cin.clear();
                continue;
            }
            if (numbers2[j] < 1 || numbers2[j] > 99)
            {
                cout << "Error on input type, please enter a number from 1 to 99 " << "\n";
                cin.ignore(10000, '\n');
                cin.clear();
                continue;
            }
            else
            {
                cout << "for field " << j+1 << " the number " << numbers2[j] << "has been recorded." << "\n" ;
                done = true;
            }
        }

    }

return;
}

void sum_and_average(int numbers, int (&numbers2)[1024], int& sum, int& average)
{
    int i;
    for(i = 0; i < numbers; i++)
    {
        sum = sum + numbers2[i];
        average = sum / numbers;

    }
    return;
}



