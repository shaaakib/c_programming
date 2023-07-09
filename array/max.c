#include <stdio.h>
#include <limits.h>
int main(){
    int arr[7] = {-10, -4, -20, -80, -19, -5, -12};
    // int max = arr[0]; // small number
    int max = INT_MIN;
    for(int i=0; i<=6; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}