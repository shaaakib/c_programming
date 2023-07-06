// ? Write a C Program to Calculate Grade of Student.

// Mark Range Grade
// 91-100 A+
// 81-90 A
// 71-80 B+
// 61-70 B
// 51-60 C
// 41-50 D
// <41 F

#include <stdio.h>
int main(){
    int marks;
    printf("Enter the marks obtained : ");
    scanf("%d", &marks);
    if(marks >= 91 && marks <= 100)
        printf("A+");
    else if(marks >= 81 && marks <= 90)
        printf("A");
    else if(marks >= 71 && marks <= 80)
        printf("B+");
    else if(marks >= 61 && marks <= 70)
        printf("B");
    else if(marks >= 51 && marks <= 60)
        printf("C");
    else if(marks >= 41 && marks <= 50)
        printf("D");
    else{
        printf("F");
    }
    return 0;
}