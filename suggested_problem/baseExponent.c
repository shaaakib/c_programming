#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent, i;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
