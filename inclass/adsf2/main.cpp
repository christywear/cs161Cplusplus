#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//string fruit;
//string letter;
string gender;
int age, price;
int main()
{ cout << "Please name your gender (M/F): ";
cin >> gender;
system("CLS");
cout << "Your gender is " << gender << endl;
system("CLS");

/* calculating cost */
if (gender == "F" or gender == "f" or gender == "Female" or gender == "female")
    { cout << "Please enter your age: ";
        cin >> age;
        if (age < 1)
            {system("CLS");
                cout << "Please Enter valid number";
                return 0;}
        else
            if (age > 200)
                {system("CLS");
                cout << "Please Enter valid number";
                    return 0;}
            else
                if (age > 25)
                    { price = 100;}
                else
                    if (age <= 25)
                        { price = 120;}

     }
else
    if (gender == "M" or gender == "m" or gender == "male" or gender == "Male")
        {cout << "Please enter your age: ";
            cin >> age;
            if (age < 1)
                {system("CLS");
                    cout << "Please Enter valid number";
                return 0;}
        else
            if (age > 200)
                {system("CLS");
                cout << "Please Enter valid number";
                    return 0;}
            else
                if (age > 30)
                    {price = 100;}
                else
                    if ( age < 25)
                        { price = 150;}
                    else
                        if (age == 25)
                            {price = 110;}

        }
else
    if (gender != "M" and gender != "m" and gender != "male" and gender != "Male" and gender != "f" and gender != "F" and gender != "female" and gender != "Female")
        { system("CLS");
        cout << "Please Enter valid format of F or M";
        return 0;}


cout << "Based on Age: " << age << endl;
cout << "Based on Gender: " << gender << endl;
cout << "Your estimated price will be " << price << endl;
   return 0;
}


    /*
    cout << " Which is a fruit? An apple or a potato?" << endl;
    cin >> fruit;

    if (fruit == "Apple")
        {system("CLS");
        cout << "Correct, an Apple is a fruit." << endl;}
    else
        if (fruit == "apple")
            {system("CLS");
            cout << "Correct, an apple is a fruit." << endl;}
        else
            if (fruit == "potato")
                {system("CLS");
                cout << "Incorrect, a potato is not a fruit." << endl;}
            else
                if (fruit == "Potato")
                    {system("CLS");
                    cout << "Incorrect, a Potato is not a fruit." << endl;}
                else
                    {system("CLS");
                    cout << "Please try again with a valid input" << endl;}

                    */
    /*cout << "Enter A or B or C or D " << endl;
    cin >> letter;

    if (letter == "a")
        {cout << "you chose an apple" << endl;}
    else
        if (letter == "b")
            {cout << "you chose a bear!" << endl;}
        else
            if (letter == "c")
                {cout << " you chose a cat" << endl;}
            else
                if (letter == "d")
                    {cout << "You chose a dog!" << endl;}
                else
                    cout << "You need to choose one of the proper letters" << endl; */

        /* if letter != 'a' and letter != 'b' .. */

