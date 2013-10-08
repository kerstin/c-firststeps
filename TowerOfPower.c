/*  Write a program TowerOfPower that asks the user for an int value
between 1 and 10 that serves as the base value. Display the 7 lowest
powers of the base value. Display them right-justified.

It is not necessary to check whether input is in the expected range.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int userinput = 0;

    printf("Please enter a number between 1 and 10\nto build a "
        "'Tower of Power' from its first seven powers: ");
    scanf("%d", &userinput);

    printf("\t%8d\n", userinput);
    printf("\t%8d\n", userinput*userinput);
    printf("\t%8d\n", userinput*userinput*userinput);
    printf("\t%8d\n", userinput*userinput*userinput*userinput);
    printf("\t%8d\n", userinput*userinput*userinput*userinput*userinput);
    printf("\t%8d\n", userinput*userinput*userinput*userinput*userinput*
        userinput);
    printf("\t%8d\n", userinput*userinput*userinput*userinput*userinput*
        userinput*userinput);

    return 0;
}
