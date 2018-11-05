#include <iostream>

using namespace std; /* error number 1, needs this or std:: infront of cin and cout */

int main()
{
    //This program should read in two numbers
    // and output the largest one of them.
    int num1,num2, largest; /* error 2 and 3, missing ; , and largest declaration*/
    cout << "Enter two integers" << endl;
    cin >> num1, num2; /* error number 4, needs >> for cin not <<. */
    if (num1 > num2)   /* error number 5, no ; after if otherwise it stops if statement here*/
    largest = num1;    /*int largest not declared */
    else
        largest = num2; /*int largest not declared */
    cout << "The largest is " << largest << endl; /* error number 6, needed << before largest int. */
    return 0;

}
