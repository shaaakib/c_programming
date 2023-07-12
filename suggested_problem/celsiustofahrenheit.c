#include <stdio.h>
void main(){
  float celsius, fahrenheit;
  printf("Enter celsius : ");
  scanf("%d",&celsius);

  fahrenheit = (celsius* 9/5) + 32;
   printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}