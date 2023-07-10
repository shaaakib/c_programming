#include <stdio.h>

int main() {
    float temperature;
    int choice;

    printf("Temperature Conversion:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        float celsius = (temperature - 32) * 5 / 9;
        printf("%.2f°F is equal to %.2f°C\n", temperature, celsius);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        float fahrenheit = (temperature * 9 / 5) + 32;
        printf("%.2f°C is equal to %.2f°F\n", temperature, fahrenheit);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

