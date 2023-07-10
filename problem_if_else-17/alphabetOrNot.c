// ? C program to check whether a character is alphabet or not
#include <stdio.h>
    int main(){
        char character;
        printf("Enter character : ");
        scanf("%c", &character);
        if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')){
            printf("Alphabet");
        }else {
            printf("Not Alphabet");
        }
        return 0;
    }