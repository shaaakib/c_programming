// ? C program to check whether a character is alphabet, digit or special character
#include <stdio.h>
    int main(){
        char character;
        printf("Enter Character : ");
        scanf("%c", &character);

        if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')){
            printf("Alphabet character");
        }else if(character >= '0' && character <= '9'){
            printf("Digit character");
        }else {
            printf("Special character");
        }

        return 0;
    }