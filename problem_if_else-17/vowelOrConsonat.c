#include <stdio.h>
    int main(){
        char character;
        printf("Enter character : ");
        scanf("%c", &character);
        if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
            printf("Vowel Character");
        }else{
            printf("Consonant Character");
        }
        return 0;
    }