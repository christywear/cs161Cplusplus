#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char test[100];
    size_t i;

    sprintf(test, "\x1b[1;32mArrays don't match!\x1b[0m\n");

    for (i = 0; i < strlen(test); i++) {
        printf("%02x ", test[i]);
    }

    printf("\n");

    return 0;
}
