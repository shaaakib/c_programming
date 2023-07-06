// ? Write a C Program to Convert Uppercase char to Lowercase char.
#include <stdio.h>
int main() {
    char cha, lowerCase;
    printf("Enter an uppercase character : ");
    scanf("%c", &cha);
    lowerCase = cha + 32;
    printf("The lowercase character is: %c\n", lowerCase);

    return 0;
}