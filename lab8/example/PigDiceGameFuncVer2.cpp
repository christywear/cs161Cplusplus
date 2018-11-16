#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showInstructions();
bool getYesNo();
int rollDie(bool);

const bool HUMAN = false;
const bool COMPUTER = true;

int main()
{
    srand(time(0));

    int pScore = 0, cScore = 0;
    showInstructions();

    // iterate once per game
    do {
        // iterate once per round
        do {
            cout << "Your turn\n";
            cout << "Press y to roll... ";
            getYesNo();
            pScore += rollDie(HUMAN);
            cout << "Your score: " << pScore << endl << endl;
            cout << "Computer's turn\n";
            cScore += rollDie(COMPUTER);
            cout << "Computer's score: " << cScore << endl << endl;
        } while ( pScore < 100 && cScore < 100);

        if (pScore > cScore)
            cout << "You win!\n";
        else
            cout << "Computer wins\n";

        cout << "\nDo you want to play again?" << endl;
    } while ( getYesNo() );



    /* Drivers
    // Test showInstructions
     showInstructions();
    // Test getYesNo()
     cout << "Enter yes or no";
     cout << getYesNo();
    // Test rollDie()
    //cout << rollDie();
     */

    return 0;
}


void showInstructions()
{
    cout << "This is the dice game called Pig." << endl;
    cout << "You and the computer will take turns rolling a single die." << endl;
    cout << "On each turn, you can keep rolling until you roll 1." << endl;
    cout << "Each time you roll, the number rolled will be added to your score." << endl;
    cout << "But, if you roll 1 your score for that turn will be 0." << endl;
    cout << "The game ends when either your score or the computer's reaches 100." << endl;
    cout << "The goal is to get a higher score than the compter." << endl;


}


// Gets a single character from the keyboard
// and returns true if it is 'y' false for anything else
bool getYesNo()
{
    char in = 'n';
    cin.get(in);
    cin.ignore();
   if (in == 'y' || in == 'Y')
        return true;
    else
        return false;
}


// Simulatges rolling a single die
int rollDie(bool computer)
{
    int dieVal = 0, score = 0, rollCount = 1;
    bool rollAgain = false;
    do {
        dieVal = 1 + rand() % 5;
        cout << "Roll " << rollCount << ": " << dieVal << " " << endl;
        if (dieVal != 1){
            score += dieVal;
            if (computer)
                rollAgain = rollCount <= 3 || score <= 10;
            else {
                cout << "Do you want to roll again? ";
                rollAgain = getYesNo();
            }
        }
        else {
            score = 0;
            rollAgain = false;
        }
        rollCount++;
    } while ( rollAgain );
    return score;
}


/* Stubs
void showInstructions()
{
    cout << "showInstruction" << endl;
}

bool getYesNo()
{
    cout << "In getYesNo" << endl;
    return false;
}


int rollDie()
{
    cout << "In rollDie" << endl;
    return 100;
}
*/












