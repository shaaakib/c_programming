#include <stdio.h>
    int main(){
        int arr[5];
        
        for(int i=0; i<=4; i++){ // i = 0,1,3,4
            printf("Enter element number %d\n", i + 1);
            scanf("%d", &arr[i]);
        }

        for(int i=4; i>=0; i--){
            printf("%d ", arr[i]);
        }

        return 0;
    }