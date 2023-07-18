// ? Find the second largest element in the given array.
#include <stdio.h>
#include <limits.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,6,7};
    // int max = arr[0]; // small number
    int max = INT_MIN;
    int smax = INT_MIN;
    // for(int i=1; i<=6; i++){
    //     if(max<arr[i]){
    //         max = arr[i];
    //     }
    // }

    // for(int i=1; i<=6; i++){
    //     if(arr[i]!=max && smax<arr[i]){
    //         smax = arr[i];
    //     }
    // }

    for(int i = 0; i<=6; i++){
        if(max<arr[i]){
            smax = max; // smax is now previous max
            max = arr[i]; // max is now a new max
        }
       else if(smax<arr[i] && max!=arr[i]){
            smax = arr[i];
        }
    }
  
    printf("%d", smax);
    return 0;
}