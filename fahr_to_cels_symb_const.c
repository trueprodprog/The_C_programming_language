//
// Created by Konstantin on 14.06.26.
//

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main() {
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + 20)
        printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
}