// ? Ques : Print hello world ‘n’ times. Take ‘n’ as input from user
#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // scope of variables
    int i;
    for( i = 1; i<=n; i=i+2){
        printf("Hello World\n");
    }

printf("%d", i);

return 0;
}
