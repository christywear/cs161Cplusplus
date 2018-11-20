//written by christy ganger
// clear screen found at http://www.cplusplus.com/articles/4z18T05o/

#include <iostream>
#include <ctime>
#include <iomanip>
#include "string"
using namespace std;
void pause(int interval);
void clear_screen();
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
        clear_screen();

    }
    return 0;
}

void pause(int interval)
{
    time_t timenow = time(NULL);
    int timelater = timenow + interval;
    while (timenow != timelater)
    {
     timenow = time(NULL);
    }

    return;
}

#ifdef __unix_  

#include <unistd.h>
#include <term.h>

void clear_screen()
{
	if (!cur_term)
	{
		int result;
		setupterm(NULL, STDOUT_FILENO, &result);
		if (result <= 0) return;
	}

	putp(tigetstr("clear"));
}

#elif defined (_WIN32) || defined(WIN32)
  #include <windows.h>

void clear_screen()
  {
  HANDLE                     hStdOut;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  DWORD                      count;
  DWORD                      cellCount;
  COORD                      homeCoords = { 0, 0 };

  hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
  if (hStdOut == INVALID_HANDLE_VALUE) return;

  /* Get the number of cells in the current buffer */
  if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
  cellCount = csbi.dwSize.X *csbi.dwSize.Y;

  /* Fill the entire buffer with spaces */
  if (!FillConsoleOutputCharacter(
    hStdOut,
    (TCHAR) ' ',
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Fill the entire buffer with the current colors and attributes */
  if (!FillConsoleOutputAttribute(
    hStdOut,
    csbi.wAttributes,
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Move the cursor home */
  SetConsoleCursorPosition( hStdOut, homeCoords );
  }

#endif

