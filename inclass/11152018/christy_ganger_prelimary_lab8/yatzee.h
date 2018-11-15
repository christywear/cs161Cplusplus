#ifndef YATZEE_H_INCLUDED
#define YATZEE_H_INCLUDED
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



#endif // YATZEE_H_INCLUDED
