// #include <stdio.h>
// int main(){
//     float p, r, t, si;
//     p = 100;
//     r = 10;
//     t = 2;
//     si = (p * r * t)/100;
//     printf("%f", si);
//     return 0;
// }

#include <stdio.h>
int main() {
    float principal, rate, time, si;
    printf("Enter Principal : ");
    scanf("%f", &principal);
    printf("Enter rate : ");
    scanf("%f", &rate);
    printf("Enter time : ");
    scanf("%f", &time);
    si = (principal * rate * time)/ 1000;
    printf("Your simple interest is %f", si);
    return 0;
}