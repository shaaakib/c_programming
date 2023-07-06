// ? Write a C Program to Calculate the Power of a Number.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter a Number : ");
    scanf("%d", &num1);
    printf("Enter a power number : ");
    scanf("%d", &num2);

    int power = num1 * num2;
    printf("Result %d", power);
    return 0;
}