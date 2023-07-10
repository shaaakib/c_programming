#include <stdio.h>
int main(){
     double side1, side2, side3;
     printf("Enter side : ");
     scanf("%lf %lf %lf", &side1, &side2, &side3);

     if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
     {
          printf("Yes. It can be a triangle\n");
     }
     else
     {
          printf("Yes. It can't be a triangle\n");
     }
    return 0;
}