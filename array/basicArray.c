#include <stdio.h>
int main()
{
    // int arr[5] = {2, 4, 6, 8, 1};
    // arr[4] = 100; // {2, 4, 6, 100}
    // arr[1] = 1;
    // int arr[4];
    // printf("Enter first element : ");
    // scanf("%d", &arr[0]);
    // printf("Enter 2nd element : ");
    // scanf("%d", &arr[1]);
    // printf("Enter 3rd element : ");
    // scanf("%d", &arr[3]);
    // printf("Enter fourth element : ");
    // scanf("%d", &arr[4]);

    // printf("%d",arr[0]);
    // float a[3] = {1.2, 3.4, 5.7};
    // printf("%f", a[2]);
    // char arr[4] = {'a', 'n', 'Y', '%'};
    // printf("%c", arr[3]);

    // int arr[5] = {2, 4, 6, 1};

    // for(int i=0; i<4; i++){
    //     printf("%d ", arr[i]);
    // }

    int arr[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("\nEnter element number %d ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // printf("%d", arr[1]);

    return 0;
}
