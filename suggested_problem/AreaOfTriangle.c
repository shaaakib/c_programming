#include <stdio.h>
void main (){
    float base, height;
    printf("Enter base : ");
    scanf("%f", &base);
    printf("Enter height : ");
    scanf("%f", &height);

   float area = (base * height) * 1/2 ;
    printf("Area of a triangle %.2f", area);
}