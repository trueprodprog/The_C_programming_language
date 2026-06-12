//
// Created by Konstantin on 12.06.26.
//

#include <stdio.h>

/*print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point version
 */

main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr < upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius); //%3.0f means width 3 and 0 decimals
        fahr = fahr + step;
    }
}