#include <iostream>

using namespace std;

int main()
{
    int index = 0;  /* voiding or setting the int to zero before clears whatever may be in there beforehand */
    const int LIMIT = 10;
    while (index < LIMIT) /* no ; on while loop)*/
    {
        cout << (index * index) << endl;  /* not clear on instructions, squares as in length times width? or square roots? Are you wanting to print out different sized squares? */
        index++;  /*needs to count up , not down */
    }
    return 0;
}
