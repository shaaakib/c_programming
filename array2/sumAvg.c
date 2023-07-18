#include <stdio.h>
void main(){
    int a[100], i, avg, sum = 0, num;
    
    scanf("%d",&num);

    for(i=0;i<num;i++){
        scanf("%d ",&num);
    }

    for(i=0; i<num; i++){
        sum = sum + a[i];
    }
    
    printf("sum: %d",sum);
}