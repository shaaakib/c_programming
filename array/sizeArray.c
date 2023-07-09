// ? ques : Are the following array declarations correct 1. int a (25) = false; 2. int size = 10, b[size]; = true int c = {0, 1, 2} = false;

#include <stdio.h>
int main()
{
    int size = 10, b[size];
    b[0] = 2;
    printf("%d", b[0]);
    return 0;
}
