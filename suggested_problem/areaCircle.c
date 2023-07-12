#include <stdio.h>
void main(){
    float pi = 3.1416;
    float r;
    printf("Enter r : ");
    scanf("%f", &r);
   float area = pi * (r * r);
    printf("Area of a circle %.2f", area);
}