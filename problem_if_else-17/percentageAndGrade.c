// ? C program to enter student marks and find percentage and grade
// If percentage >= 90% : Grade A
// If percentage >= 80% : Grade B
// If percentage >= 70% : Grade C
// If percentage >= 60% : Grade D
// If percentage >= 40% : Grade E
// If percentage < 40% : Grade F
#include <stdio.h>
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    if(num >= 90 && num <= 100 ){
        printf("A");
    }else if(num >= 80 && num <= 89){
        printf("B");
    }else if(num >= 70 && num <= 79){
        printf("C");
    }else if(num>= 60 && num <= 69){
        printf("D");
    }else if(num >= 40 && num <= 59){
        printf("E");
    }else if(num >= 0 && num <= 39){
        printf("F");
    }else{
        printf("Not Valid Number!");
    }
}