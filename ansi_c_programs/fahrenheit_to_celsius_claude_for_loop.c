#include <stdio.h>

#define LOWER 0     // lower limit of temperature table
#define UPPER 300   // upper limit
#define STEP 20     // step size

int main() {
    int fahr;
    float celsius;

    printf("  °F      °C\n");
    printf("---    -----\n");

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3d %7.1f\n", fahr, celsius);
    }

    return 0;
}
