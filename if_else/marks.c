/*  Ques : Take input percentage of a student and print the Grade according to marks:

1) 90-100 Excellent
2) 80-90 Very Good
3) 70-80 Good
4) 60-70 Can do better
5) 50-60 Average
6) 40-50 Below Average
7) <40 Fail
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter percentage : ");
    scanf("%d", &n);
//     if(n>80){
//         printf("A grade\n");
//     }
//    else if(n>60){
//         printf("B grade\n");
//     }
//    else if(n>40){
//         printf("C grade\n");
//     }
    if(n>80){
        printf("A grade\n");
    }else{
        if(n>60){
            printf("B grade\n");
        }else{
            if(n>40){
                printf("C grade\n");
            }
            else{
                printf("D grade\n");
            }
        }
    }
    return 0;
}