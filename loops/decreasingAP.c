// ? Ques : Display this AP - 100,97,94,..upto all terms which are positive.
#include <stdio.h>
int main(){
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // 100 97 94 ....
    int a = 100;
    for(int i = 1; a>0; i++){
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
}