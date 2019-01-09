#include <iostream>

using namespace std;
int my_function(int& first, string second, int third=0);
int main()
{
    int first =0, blah, third = 0;
    string second;
    cout << "enter numbers";
    cin >> first, third;
    cout << "enter string";
    cin >> second;
    blah = my_function(first, second, third);
    cout << "Hello world!" << endl;
    return 0;
}
 int my_function(int& first, string second, int third)
 {
     cout << first;
     cout << second;
     cout << third;
     return 4;
 }
