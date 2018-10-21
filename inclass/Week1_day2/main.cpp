#include <iostream>

using namespace std;

void clear_screen(void);
void pause(void);

int main()
{
    cout << "short " << sizeof(short) << endl;
    cout << "int " << sizeof(int) << endl;
    cout << "float " << sizeof(float) << endl;
    cout << "double " << sizeof(double) << endl;
    cout << "long double " << sizeof(long double) << endl;
    cout << "long " << sizeof(long) << endl;
    cout << "long long " << sizeof(long long) << endl;

    pause();

    clear_screen();
    string name_of_school = "Lane Community College";
    cout << "Welcome to " << name_of_school << endl;

    string student_name;
    cout << "Please enter your student name:" << endl;
    cin >> student_name;

    clear_screen();


    cout << "User " << student_name << " logged in." << endl;
    pause();

        return 0;
}

void clear_screen(void)
{
     cout << "\n\n";
     system("CLS");
     cout << "\n\n";

     return;
}

void pause(void)
{
    cout << "\n\n";
    system("PAUSE");
    cout << "\n\n";

    return;
}
