/*
Christy Ganger
Lab 3 Part 2
10/11/2018
CIS126C++
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
int calculating_int_1, calculating_int_2, answer;
char calculating_operator;

  // input
    cout << "please type out two integers" << endl;
    cout << "Integer one is: ";
    cin >> calculating_int_1;
    system("CLS");
    cout << "Integer two is: ";
    cin >> calculating_int_2;
    system("CLS");

    cout << "Your integers are " << calculating_int_1 << " and " << calculating_int_2 << endl;
    cout << "In order to perform mathematical calculations," << endl;
    cout << "please tell me what kind of math you'd like to do." << endl;
    cout << "Use * to multiply the integers" << endl;
    cout << "Use / to divide the integers" << endl;
    cout << "Use % to find the remainder after dividing the first one by the second" << endl;
    cout << "Use + for addition" << endl;
    cout << "Use - for subtraction" << endl;
    cin >> calculating_operator;

  //processing
  if (calculating_operator != '*' and calculating_operator != '/'
      and calculating_operator != '%' and calculating_operator != '+'
      and calculating_operator != '-')
    {system("CLS");
        cout << "Please enter a valid math operator" << endl;
    return 0;}

  if (calculating_int_1 >= 0 && calculating_int_1 < 32767)
    {if (calculating_int_2 >=0 && calculating_int_2 < 32767)
      {if (calculating_operator == '*')
        {answer = calculating_int_1 * calculating_int_2;}
       else
        if (calculating_operator == '/')
            {if (calculating_int_2 > 0)
                {answer = calculating_int_1 / calculating_int_2;}
             else
                {system("CLS");
                cout << "Cannot divide by zero" << endl;
                return 0;}
            }
        if (calculating_operator == '%')
            {answer = calculating_int_1 % calculating_int_2;}
        else
        if (calculating_operator == '+')
            {answer = calculating_int_1 + calculating_int_2;}
        else
        if (calculating_operator == '-')
            {answer = calculating_int_1 - calculating_int_2;}
      }
    }
  //output
    system("CLS");
cout << calculating_int_1 << " " << calculating_operator << " " << calculating_int_2 << " = " << answer << endl;

    return 0;
}
