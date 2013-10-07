/*  Write a program that displays a temperature
    conversion table. The table starts at -100°C
    and goes up to 100°C with a step size of 10°C.

    Use the following formulas for conversion:
    C->F: F = C x 1.8 + 32
    C->K: K = C + 273.15
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float celsius = -100;
    float fahrenheit;
    float kelvin;

    printf("Celsius\t\tKelvin\t\tFahrenheit\n");

    for(celsius=-100; celsius<=100; celsius+=10) {
        // C->F: F = C x 1.8 + 32
        fahrenheit = celsius * 1.8 + 32;
        // C->K: K = C + 273.15
        kelvin = celsius + 273.15;
        printf("%.1f\t\t%.2f\t\t%.f\n", celsius, kelvin, fahrenheit);
    }

    return 0;
}
