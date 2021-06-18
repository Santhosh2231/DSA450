// Reverse the array


#include<stdio.h>

int main(){

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int rev_arr[6];

    for (int i = 0; i < 6; i++)
    {
        rev_arr[i] = arr[6-i-1];
    }
    printf("Before Reverse...\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nAfter Reverse...\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", rev_arr[i]);
    }
    
    
    return 0;
}