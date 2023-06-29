#include <stdio.h>
int main(){
    int a;
    char ch = 'a';
    if(3 + 2 % 5)
        printf("This Works\n");
    if(10)
        printf("Even this work\n");
    if(-5)
        printf("Surprisingly even this works\n");
    if(ch == 'g'){
        printf("Hello");
    }
    return 0;
}