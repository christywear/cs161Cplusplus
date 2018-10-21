/* Program written by Christy Ganger on 9/26/2018 CIS161C++ */

/* Headers */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <time.h>


using namespace std;

/* Fuction Prototypes */
void pause(void);
void clear_screen(void);
void logo(void);

/*************************************************
 main
*************************************************/


int main()
{

    string user_name;
    string check_correct;
    int age;
    bool is_correct = true;
    srand(time(NULL));

    /* Get user info */
    do{
        clear_screen();
        cout << "Hello User \nPlease type your name, and press ENTER:" << endl;
        getline(cin, user_name);
        clear_screen();
        cout << "Please type your age, and press ENTER:" << endl;
        cin >> age;
        clear_screen();

            // Confirm User_name and age is correct
            cout << "Your first name is: " << user_name << endl;
            cout << "Your Age is: " << age << endl;
            cout << "is this correct? (Type Yes, and press enter if correct)" << endl;
            cin >> check_correct;
            if (check_correct == "y" || check_correct == "Y" || check_correct == "yes" || check_correct == "Yes")
            {
                is_correct = false;

            };


        }while (is_correct);


        /* welcome the new user */
    clear_screen();
    cout << "Welcome \"" << user_name << "\" To Apeture Science Enrichment Center" << endl;
    pause();
    clear_screen();
    cout << "User \"" << user_name << "\" logged in, setting test for parameters:\nAge: " << age << endl;

     /*add random funny parameters */
      string hair_color[5] = {"blue", "brown", "blonde", "black", "red"};
      int select_hair = rand() % 5;
      string eye_color [6] = {"blue", "brown", "black", "green", "hazel", "grey"};
      int select_eye = rand() % 6;
      string tool [4] = {"Orange Portal Gun", "Blue Portal Gun", "Old mtn dew can", "post-it notes"};
      int select_tool = rand() % 4;

      cout << "Hair Color: " << hair_color[select_hair] << endl;
      cout << "Eye Color: " << eye_color[select_eye] << endl;
      cout << "Tool: " << tool[select_tool] << endl;

    pause();
    return 0;
    }

    /***********************************************
     pause
    ***********************************************/

    void pause(void)
    {
        cout << "\n\n";
        system("PAUSE");
        cout << "\n\n";
        return;
    }

    /***********************************************
     clear Screen // add logo
    ***********************************************/

    void clear_screen(void)
    {
        cout << "\n\n";
        system("CLS");
        cout.flush();
        logo();
        cout << "\n\n";
        return;
    }

    /***********************************************
     setting up the logo
    ***********************************************/

    void logo(void)
	{
		ifstream Reader ("./include/logo.txt");
		if (Reader.is_open())
            {
			string print_logo;
			while (getline(Reader, print_logo)) {
				cout << print_logo << endl;
			}
		}
		else {
			cout << "Error reading file" << endl;
		}
	}

    /************************************************
     End of Program
    ************************************************/
