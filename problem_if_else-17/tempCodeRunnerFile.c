     printf("%.2f°F is equal to %.2f°C\n", temperature, celsius);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        float fahrenheit = (temperature * 9 / 5) + 32;
        printf("%.2f°C is equal to %.2f°F\n", temperature, fahrenheit);