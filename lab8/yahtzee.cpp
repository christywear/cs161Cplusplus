/* this portion of code written by christy ganger
lab 8
11/19/2018
version 27
*/

#include "yahtzee.h"
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
    if (ones == 3)
    {
        sum = ones * 1;
    }
    if (twos == 3)
    {
        sum = twos * 2;
    }
    if (threes == 3)
    {
        sum = threes * 3;
    }
    if (fours == 3)
    {
        sum = fours * 4;
    }
    if (fives == 3)
    {
        sum = fives * 5;
    }
    if (sixes == 3)
    {
        sum = sixes * 6;
    }
    return sum;
}
int scoreFourOfAKind(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    int sum = 0;
    if (ones == 4)
    {
        sum = ones * 4;
    }
    if (twos == 4)
    {
        sum = twos * 4;
    }
    if (threes == 4)
    {
        sum = threes * 4;
    }
    if (fours == 4)
    {
        sum = fours * 4;
    }
    if (fives == 4)
    {
        sum = fives * 4;
    }
    if (sixes == 4)
    {
        sum = sixes * 4;
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
    if (fours == 3 && twos == 2 || threes == 2 || ones == 2 || fives == 2 || sixes == 2)
    {
         sum = 25;
    }
    if (ones == 5 || twos == 5 || threes == 5 || fours == 5 || fives==5 ||sixes ==5)
     {
         sum = 25;
     }
    return sum;
}
int scoreSmallStraight(int ones, int twos, int threes, int fours, int fives, int sixes)
{   int sum = 0;
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
    if (ones == 5 || twos == 5 || threes == 5 || fours == 5 || fives==5 ||sixes ==5)
        sum = 50;
    return sum;
}
int scoreChance(int ones, int twos, int threes, int fours, int fives, int sixes)
{
    int sum = 0;
    sum = ones *1 + twos * 2 + threes * 3 + fours * 4 + fives * 5 + sixes * 6;
    return sum;
}

