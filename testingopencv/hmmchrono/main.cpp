#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
void pause(int interval);
int main()
{
    int maininterval = 0;
    int outputstring = 0;
    string stringloading = "-";
    string stringloading2 = "-";
    cout << "loading, please wait .." << endl;
    while(maininterval != 20)
    {
        cout << "loading, please wait .." << endl;
        cout << setw(45) << right <<"loading is " << outputstring << " percent complete." <<endl;
        cout << setw(40) << right << "[";
        cout << setw(20) << left << stringloading;
        cout << "]";

        pause(maininterval);

        maininterval++;
        outputstring = maininterval *5;
        stringloading = stringloading + stringloading2;
        system("CLS");

    }
    return 0;
}

void pause(int interval)
{
    int timenow = time(NULL);
    int timelater = timenow + interval;
    while (timenow != timelater)
    {
     timenow = time(NULL);
    }

    return;
}
