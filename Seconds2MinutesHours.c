/*  Write a program that converts seconds to minutes and hours.
The user enters the value in seconds, the program calculates
the number of minutes and hours and outputs the result.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int seconds = 0;
    int hours = 0;
    int minutes = 0;
    int leftoverseconds = 0;

    printf("Enter seconds to convert into minutes and hours: ");
    scanf("%d", &seconds);

    minutes = seconds/60;

    printf("%d seconds is %d hour(s), %d minute(s) and %d second(s).\n",
        seconds, hours, minutes, leftoverseconds);

    return 0;
}
