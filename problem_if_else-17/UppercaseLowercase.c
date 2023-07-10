// ? C program to check whether a character is Uppercase or Lowercase
#include <stdio.h>
int main(){
    char character;
    printf("Enter character : ");
    scanf("%c", &character);
    if((character >= 'A' && character <= 'Z')){
        printf("Uppercase!");
    }else{
        printf("Lowercase!");
    }
    return 0;
}