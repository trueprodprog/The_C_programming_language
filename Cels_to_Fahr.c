//
// Created by Konstantin on 12.06.26.
//

#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 30;
    step = 5;
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9) / 5.0 + 32;
        printf("%3.0f\t%6.0f \n", celsius, fahr);
        celsius = celsius + step;

    }

}

