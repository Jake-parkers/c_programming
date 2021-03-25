//
// Created by cigna on 3/22/2021.
//

#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

celsius() {
    float cels, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cels = lower;
    printf("Celsius to Fahrenheit\n");
    while (cels <= upper) {
        fahr = (cels * (5.0/9.0)) + 32;
        printf("%3.0f %6.1f\n", cels, fahr);
        cels = cels + step;
    }
}

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit to Celsius\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
//    celsius();
}