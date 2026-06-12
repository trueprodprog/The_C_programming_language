//
// Created by Konstantin on 12.06.26.
//

#include <stdio.h>

/* print Fhrenheit-Celsius table
 * for fahr = 0, 20, ..., 300
 */

main() {
    int fahr, celsius;
    int lower, upper, step;
    printf("Table conversion Fahreenheit to Celcius\n");
    printf("Fahr \t Celsius \n");
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius =  (fahr-32) * 5 / 9; //if put braces around (5 / 9) the output will be zero
        printf("%3d\t %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}