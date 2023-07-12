#include <stdio.h>
void main(){
   int i, sum = 0;
    for(i=1; i<=50; i++){
        sum = sum + i;
    }
    printf("Sum = %d", sum);
}