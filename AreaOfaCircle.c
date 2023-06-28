// #include <stdio.h>
// int main(){
//     float radius = -10;
//     float pi = 3.1416;
//     float area = pi * radius * radius;
//     printf("%f", area);
//     return 0;
// }

// Taking Input value

#include <stdio.h> 
int main() {
    float radius;
    printf("Enter Radius Number : ");
    scanf("%f", &radius);
    float pi = 3.1416;
    float area = pi * radius * radius;
    printf("The area of circle is: %f", area);
    return 0;
}