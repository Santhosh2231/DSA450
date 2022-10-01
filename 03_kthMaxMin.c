// Find the "Kth" max and min element of an array 


#include<stdio.h>

// Function to swap 2 values using third pointer
void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

// function to sort the array
void sort(int *arr){
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > arr[i+1]){
            swap(&arr[i], &arr[i+1]);
        }
    }
}

// main funciton
int main(){

    // declare array of size 6
    int arr[6] = {12, 21, 34, 64, 76, 2};
    int k;


    printf("Enter Value which you want to find Min and Max : ");
    scanf("%d", &k);
    sort(arr);  // sort the array
    printf("Sorted Array is...\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // printf("%dth Smallest Element is %d\n", k, arr[k-1]);
    // printf("%dth Largest Element is %d\n", k, arr[6-k-1]);

    return 0;
}
