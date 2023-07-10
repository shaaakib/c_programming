// ? C program to enter week number and print day of week
#include <stdio.h>
    int main(){
        int weekNumber;
        printf("Enter week number : ");
        scanf("%d", &weekNumber);

        if(weekNumber == 1){
            printf("Sunday");
        }else if(weekNumber == 2){
            printf("Monday");
        }else if(weekNumber == 3){
            printf("Tuesday");
        }else if(weekNumber == 4){
            printf("Wednesday");
        }else if(weekNumber == 5){
            printf("Thursday");
        }else if(weekNumber == 6 ){
            printf("Friday");
        }else if(weekNumber == 7){
            printf("Saturday");
        }else{
            printf("Invalid day!");
        }
        return 0;
    }