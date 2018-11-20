#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <windows.h>



/*******************************
 *
 * Yahtzee
 *
 * Starter code by Paul Wilkins
 * Last Modified: 11/18/2013
 *
 * Finished Code By Lawrence Warner
 * CS 161 C++
 * Last Modified: 11/17/18
 *******************************/

using namespace std;

void printRoll(int n1, int n2, int n3, int n4, int n5);
bool askReroll(int n);
void printSeparator();
void printScore(int onesScore, int twosScore, int threesScore, int foursScore,
	int fivesScore, int sixesScore, int threeOfAKind,
	int fourOfAKind, int fullHouse, int smallStraight,
	int largeStraight, int yahtzee, int chance, int die1, int die2, int die3, int die4, int die5);
void printScoreLine(string name, int score);
int getScoreOption(int onesScore, int twosScore, int threesScore, int foursScore,
	int fivesScore, int sixesScore, int threeOfAKind,
	int fourOfAKind, int fullHouse, int smallStraight,
	int largeStraight, int yahtzee, int chance);
int tabulateDice(int n, int d1, int d2, int d3, int d4, int d5);
int scoreOnes(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreTwos(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreThrees(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreFours(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreFives(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreSixes(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreThreeOfAKind(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreFourOfAKind(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreFullHouse(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreSmallStraight(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreLargeStraight(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreYahtzee(int ones, int twos, int threes, int fours, int fives, int sixes);
int scoreChance(int ones, int twos, int threes, int fours, int fives, int sixes);


const int NUM_CATEGORIES = 13;
const int SIDES = 6;
const int EMPTY = -1;
enum Category {
	ONES = 1, TWOS, THREES, FOURS, FIVES, SIXES, THREE_OF_A_KIND,
	FOUR_OF_A_KIND, FULL_HOUSE, SMALL_STRAIGHT, LARGE_STRAIGHT,
	YAHTZEE, CHANCE
};

int main()
{

	int die1, die2, die3, die4, die5;
	bool redo1, redo2, redo3, redo4, redo5;

	int ones, twos, threes, fours, fives, sixes;

	int onesScore, twosScore, threesScore, foursScore, fivesScore, sixesScore;
	int threeOfAKind;
	int fourOfAKind;
	int fullHouse;
	int smallStraight;
	int largeStraight;
	int yahtzee;
	int chance;

// Splash Screen

    cout << endl << endl << endl << endl << endl << endl << endl << endl;

    cout << endl << "                                        +------------------------------------------+";

    cout << endl << "                                         |  __    __    _     _                   |";

    cout << endl << "                                         |  \\ \\  / /   | |   | |                  |";

    cout << endl << "                                         |   \\ \\V /__ _| |__ | |_ _______  ___    |";

    cout << endl << "                                         |    \\  /   ` | '_ \\| __|_  / _ \\/ _ \\   |";

    cout << endl << "                                         |    | | (_|  | | | | |_ / /  __/  __/   |";

    cout << endl << "                                         |    \\_/\\__,_ |_| |_|\\__/___\\___|\\___|   |";

    cout << endl << "                                         |                                        |";

    cout << endl << "                                         |                                        |";

    cout << endl << "                                        +------------------------------------------+";

    cout << endl << endl;
    cout << endl << "                                                            Loading" << endl;
        Sleep(1000);
            cout << "                                                          *";
        Sleep(1200);
            cout << "*";
        Sleep(1000);
            cout << "*";
        Sleep(1100);
            cout << "*";
        Sleep(500);
            cout << "*";
        Sleep(500);
            cout << "*";
        Sleep(1000);
            cout << "*";
        Sleep(1500);
            cout << "*";
        Sleep(2000);
            cout << "*";
        Sleep(2500);
            cout << "*";
        Sleep(3000);
            cout << "*";
        Sleep(4000);
        cout << string( 100, '\n' );


	onesScore = twosScore = threesScore = foursScore = fivesScore = sixesScore = EMPTY;
	threeOfAKind = fourOfAKind = fullHouse = smallStraight = largeStraight = yahtzee = chance = EMPTY;

	cout << "Welcome to Yahtzee!" << endl;
	srand(time(0));



	for (int turn = 0; turn < NUM_CATEGORIES; turn++)
	{
		int round = 1;
		ones = twos = threes = fours = fives = sixes = 0;
		die1 = rand() % SIDES + 1;
		die2 = rand() % SIDES + 1;
		die3 = rand() % SIDES + 1;
		die4 = rand() % SIDES + 1;
		die5 = rand() % SIDES + 1;

		printRoll(die1, die2, die3, die4, die5);

		do
		{
			redo1 = askReroll(1);
			redo2 = askReroll(2);
			redo3 = askReroll(3);
			redo4 = askReroll(4);
			redo5 = askReroll(5);

			if (redo1)
			{
				die1 = rand() % SIDES + 1;
			}
			if (redo2)
			{
				die2 = rand() % SIDES + 1;
			}
			if (redo3)
			{
				die3 = rand() % SIDES + 1;
			}
			if (redo4)
			{
				die4 = rand() % SIDES + 1;
			}
			if (redo5)
			{
				die5 = rand() % SIDES + 1;
			}

			printRoll(die1, die2, die3, die4, die5);
			round++;
		} while ((redo1 || redo2 || redo3 || redo4 || redo5) && round < 3);

		ones = tabulateDice(1, die1, die2, die3, die4, die5);
		twos = tabulateDice(2, die1, die2, die3, die4, die5);
		threes = tabulateDice(3, die1, die2, die3, die4, die5);
		fours = tabulateDice(4, die1, die2, die3, die4, die5);
		fives = tabulateDice(5, die1, die2, die3, die4, die5);
		sixes = tabulateDice(6, die1, die2, die3, die4, die5);


		printScore(onesScore, twosScore, threesScore, foursScore, fivesScore, sixesScore,
			threeOfAKind, fourOfAKind, fullHouse, smallStraight, largeStraight, yahtzee, chance, die1, die2, die3, die4, die5);


		int scoreOption = getScoreOption(onesScore, twosScore, threesScore, foursScore,
			fivesScore, sixesScore, threeOfAKind,
			fourOfAKind, fullHouse, smallStraight,
			largeStraight, yahtzee, chance);



		switch (scoreOption)
		{
			case ONES:
				onesScore = scoreOnes(ones, twos, threes, fours, fives, sixes);
				break;
			case TWOS:
				twosScore = scoreTwos(ones, twos, threes, fours, fives, sixes);
				break;
			case THREES:
				threesScore = scoreThrees(ones, twos, threes, fours, fives, sixes);
				break;
			case FOURS:
				foursScore = scoreFours(ones, twos, threes, fours, fives, sixes);
				break;
			case FIVES:
				fivesScore = scoreFives(ones, twos, threes, fours, fives, sixes);
				break;
			case SIXES:
				sixesScore = scoreSixes(ones, twos, threes, fours, fives, sixes);
				break;
			case THREE_OF_A_KIND:
				threeOfAKind = scoreThreeOfAKind(ones, twos, threes, fours, fives, sixes);
				break;
			case FOUR_OF_A_KIND:
				fourOfAKind = scoreFourOfAKind(ones, twos, threes, fours, fives, sixes);
				break;
			case FULL_HOUSE:
				fullHouse= scoreFullHouse(ones, twos, threes, fours, fives, sixes);
				break;
			case SMALL_STRAIGHT:
				smallStraight = scoreSmallStraight(ones, twos, threes, fours, fives, sixes);
				break;
			case LARGE_STRAIGHT:
				largeStraight = scoreLargeStraight(ones, twos, threes, fours, fives, sixes);
				break;
			case YAHTZEE:
				yahtzee = scoreYahtzee(ones, twos, threes, fours, fives, sixes);
				break;
			case CHANCE:
				chance = scoreChance(ones, twos, threes, fours, fives, sixes);
				break;

		int scoreOption = getScoreOption(onesScore, twosScore, threesScore, foursScore,
			fivesScore, sixesScore, threeOfAKind,
			fourOfAKind, fullHouse, smallStraight,
			largeStraight, yahtzee, chance);


		}
        printScore(onesScore, twosScore, threesScore, foursScore, fivesScore, sixesScore,
			threeOfAKind, fourOfAKind, fullHouse, smallStraight, largeStraight, yahtzee, chance, die1, die2, die3, die4, die5);
	}
}

/*********************************************************
 *
 * printRoll
 * ------------------
 * This function prints out the current state of the dice,
 * with blank lines before and after the print-out.
 *
 *********************************************************/
void printRoll(int n1, int n2, int n3, int n4, int n5)
{
	cout << endl;
	cout << "Your roll is: ";
	cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << endl;
	cout << endl;
}

/*********************************************************
 *
 * askReroll
 * ------------------
 * This function ask the user if they'd like to reroll one
 * one of the dice.  The function takes an integer which is
 * the number of the die being rerolled, and returns true if
 * the die should be rerolled, false otherwise.  The integer
 * argument is used only for instruction display, this function
 * does not actually reroll any dice.  Responses accepted are
 * 'Y', 'N', 'y', and 'n'.
 *
 *********************************************************/
bool askReroll(int n)
{
	char ch;
	while (true)
	{
		cout << "Would you like to reroll die " << n << "? (Y/N) ";
		cin >> ch;
		switch (ch)
		{
		case 'Y': case 'y':
			return true;
		case 'N': case 'n':
			return false;
		default:
			cout << "Invalid response" << endl;
		}
	}

}



/********************************
 *
 * printScore
 * --------------------
 * This function prints out the complete score table
 * for the yahtzee game in its current state.
 *
 ********************************/
void printScore(int onesScore, int twosScore, int threesScore, int foursScore,
	int fivesScore, int sixesScore, int threeOfAKind,
	int fourOfAKind, int fullHouse, int smallStraight,
	int largeStraight, int yahtzee, int chance, int die1, int die2, int die3, int die4, int die5)

{
    cout << "                               " << " Here are the categories: " << "                "  << endl;
	printSeparator();
	printScoreLine("Ones", onesScore);
	cout << "1. Ones" << endl;
	printSeparator();
	printScoreLine("Twos", twosScore);
	cout << "2. Twos" << endl;
	printSeparator();
	printScoreLine("Threes", threesScore);
	cout << "3. Threes" << endl;
	printSeparator();
	printScoreLine("Fours", foursScore);
	cout << "4. Fours" << endl;
	printSeparator();
	printScoreLine("Fives", fivesScore);
	cout << "5. Fives" << endl;
	printSeparator();
	printScoreLine("Sixes", sixesScore);
	cout << "6. Sixes" << endl;
	printSeparator();
	printScoreLine("Three of a kind", threeOfAKind);
	cout << "7. Three of a kind" << endl;
	printSeparator();
	printScoreLine("Four of a kind", fourOfAKind);
	cout << "8. Four of a kind" << endl;
	printSeparator();
	printScoreLine("Full House", fullHouse);
	cout << "9. Full House" << endl;
	printSeparator();
	printScoreLine("Small Straight", smallStraight);
	cout << "10. Small Straight" << endl;
	printSeparator();
	printScoreLine("Large Straight", largeStraight);
	cout << "11. Large Straight" << endl;
	printSeparator();
	printScoreLine("Yahtzee", yahtzee);
	cout << "12. Yahtzee" << endl;
	printSeparator();
	printScoreLine("Chance", chance);
	cout << "13. Chance" << endl;
	printSeparator();
	cout << "                               "<< "Your roll is: "<< die1 << " " << die2 << " " << die3 << " " << die4 << " " << die5
        << " How would you like to score this? ";

}


/********************************
 *
 * printSeperator
 * --------------------
 * This helper function prints out a single
 * separator line used as part of the score
 * printing function.
 *
 ********************************/
void printSeparator()
{
	cout << "+-------------------+-------+" << endl;
}

/********************************
 *
 * printScoreLine
 * --------------------
 * This function prints out a single line of the score.
 * The string argument is the name of the category, while
 * the in is the value of the score.  The category name is left
 * aligned, while the score value is right aligned.
 *
 ********************************/
void printScoreLine(string name, int score)
{
	cout << "| " << left << setw(18) << name << "| ";
	if (score >= 0)
	{
		cout << right << setw(5) << score;
	}
	else
	{
		cout << "     ";
	}
	cout << " | ";
}

/********************************
 *
 * getScoreOption
 * --------------------
 * This function gets the score category which the player wishes to score
 * with the current roll.  The function ensures that the response corresponds
 * to a valid category.  It also check to make sure that the selected category
 * has not yet been scored (unscored categories contain the value EMPTY).
 *
 ********************************/
int getScoreOption(int onesScore, int twosScore, int threesScore, int foursScore,
	int fivesScore, int sixesScore, int threeOfAKind,
	int fourOfAKind, int fullHouse, int smallStraight,
	int largeStraight, int yahtzee, int chance)
{
	int ans;
	bool valid = false;

	do
	{
		cin >> ans;
		while (ans < 0 || ans > NUM_CATEGORIES)
		{
			cout << "Please enter a number between 1 and " << NUM_CATEGORIES << ": ";
			cin >> ans;
		}
		switch (ans)
		{
		case ONES:
			if (onesScore == EMPTY) valid = true;
			break;
		case TWOS:
			if (twosScore == EMPTY) valid = true;
			break;
		case THREES:
			if (threesScore == EMPTY) valid = true;
			break;
		case FOURS:
			if (foursScore == EMPTY) valid = true;
			break;
		case FIVES:
			if (fivesScore == EMPTY) valid = true;
			break;
		case SIXES:
			if (sixesScore == EMPTY) valid = true;
			break;
		case THREE_OF_A_KIND:
			if (threeOfAKind == EMPTY) valid = true;
			break;
		case FOUR_OF_A_KIND:
			if (fourOfAKind == EMPTY) valid = true;
			break;
		case FULL_HOUSE:
			if (fullHouse == EMPTY) valid = true;
			break;
		case SMALL_STRAIGHT:
			if (smallStraight == EMPTY) valid = true;
			break;
		case LARGE_STRAIGHT:
			if (largeStraight == EMPTY) valid = true;
			break;
		case YAHTZEE:
			if (yahtzee == EMPTY) valid = true;
			break;
		case CHANCE:
			if (chance == EMPTY) valid = true;
			break;
		}
		if (!valid)
		{
			cout << "That category has already been used" << endl;
		}
	} while (!valid);

	return ans;

}

/********************************
 *
 * tabulateDice
 * --------------------
 * This function calculates and returns the number of dice
 * which show the value n.
 *
 ********************************/
int tabulateDice(int n, int d1, int d2, int d3, int d4, int d5)
{
	int ans = 0;
	if (d1 == n) ans++;
	if (d2 == n) ans++;
	if (d3 == n) ans++;
	if (d4 == n) ans++;
	if (d5 == n) ans++;
	return ans;
}

int scoreOnes(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    return ones *1;
}
int scoreTwos(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    return twos *2;
}
int scoreThrees(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    return threes *3;
}
int scoreFours(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    return fours *4;
}
int scoreFives(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    return fives *5;
}
int scoreSixes(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    return sixes *6;
}
int scoreThreeOfAKind(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    int sum = 0;
    if (ones >= 3)
    {
        sum = ones * 1;
    }
     if (twos >= 3)
    {
        sum = twos * 2;
    }
     if (threes >= 3)
    {
        sum = threes * 3;
    }
     if (fours >= 3)
    {
        sum = fours * 4;
    }
     if (fives >= 3)
    {
        sum = fives * 5;
    }
     if (sixes >= 3)
    {
        sum = sixes * 6;
    }
     return sum;
}

int scoreFourOfAKind(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    int sum = 0;
    if (ones >= 4)
    {
        sum = ones * 1;
    }
     if (twos >= 4)
    {
        sum = twos * 2;
    }
     if (threes >= 4)
    {
        sum = threes * 3;
    }
     if (fours >= 4)
    {
        sum = fours * 4;
    }
     if (fives >= 4)
    {
        sum = fives * 5;
    }
     if (sixes >= 4)
    {
        sum = sixes * 6;
    }
    return sum;
}

int scoreFullHouse(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    int sum = 0;

        if (ones == 3 && twos == 2 || threes == 2 || fours == 2 || fives == 2 || sixes == 2)
    {
        sum = 25;
    }
     if (twos == 3 && ones == 2 || threes == 2 || fours == 2 || fives == 2 || sixes == 2)
    {
        sum = 25;
    }
     if (threes == 3 && ones == 2 || twos == 2 || fours == 2 || fives == 2 || sixes == 2)
    {
        sum = 25;
    }
     if (fours == 3 && ones == 2 || twos == 2 || threes == 2 || fives == 2 || sixes == 2)
    {
        sum = 25;
    }
     if (fives == 3 && ones == 2 || twos == 2 || threes == 2 || fours == 2 || sixes == 2)
    {
        sum = 25;
    }
     if (sixes == 3 && ones == 2 || twos == 2 || threes == 2 || fours == 2 || fives == 2)
    {
        sum = 25;
    }
     return sum;
}

int scoreSmallStraight(int ones, int twos, int threes, int fours, int fives, int sixes)
{   int sum;
    if ( ones >= 1 && twos >= 1 && threes >= 1 && fours >= 1)
    {
        sum = 30;
    }

    if ( twos >=1 && threes >= 1 && fours >=1 && fives >= 1)
    {
        sum = 30;
    }

    if ( threes >= 1 && fours >= 1 && fives >= 1 && sixes >= 1)
    {
        sum = 30;
    }
    return sum;
}
int scoreLargeStraight(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    int sum = 0;
    if ( ones >= 1 && twos >= 1 && threes >= 1 && fours >= 1 && fives >=1)
    {
        sum = 40;
    }

    if ( twos >=1 && threes >= 1 && fours >=1 && fives >= 1 && sixes >= 1)
    {
        sum = 40;
    }
    return sum;
}
int scoreYahtzee(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    int sum = 0;
    if (ones == 5 || twos == 5 || threes == 5 || fours == 5 || fives==5 || sixes ==5)
        {
            sum = 50;
        }

    return sum;
}
int scoreChance(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    int sum = 0;
    sum = ones * 1 + twos * 2 + threes * 3 + fours * 4 + fives * 5 + sixes * 6;

    return sum;
}
