// ? Write a C Program to Calculate Area and Perimeter of Square.
// (Hints. the area of square = Side * Side, the perimeter of a square = 4 ×
// side )

#include <stdio.h>
    int main() {
        int side, area, perimeter;
        printf("Enter the side length of the square : ");
        scanf("%d", &side);

        area = side * side;
        perimeter = 4 * side;

        printf("Area of the square: %d\n", area);
        printf("Perimeter of the square : %d\n", perimeter);

        return 0;
    }