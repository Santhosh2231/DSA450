// Find the maximum and minimum element in an array

#include<stdio.h>

int main(){

    int arr[6] = {120, 34, 52, 75, 3, 1};
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max){
            max = arr[i];
        }

        if (arr[i] < min){
            min = arr[i];
        }
    }
    
    printf("Minimum is %d\n", min);
    printf("Maximum is %d\n", max);

    return 0;
}