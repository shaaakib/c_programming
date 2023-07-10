// ? C program to check whether triangle is valid or not if angles are given.
#include <stdio.h>
int main(){
    int angles1, angles2, angles3, sum;
    printf("Enter angle : ");
    scanf("%d %d %d", &angles1, &angles2, &angles3);
    sum = (angles1 + angles2 + angles3);
    if(sum == 180){
        printf("triangle is valid");
    }else{
        printf("triangle is not valid");
    }

}