#include <iostream>


using namespace std;

int main()
{
   int whatnumber = -1;
cout << "Please enter number between 1 and 10" << "\n";
   cin >> whatnumber;
   while(whatnumber < 1 || whatnumber > 10)
   {

        cout << "err out of range" << "\n";
        cin >> whatnumber;

   }
   cout << whatnumber;
    return 0;
}
