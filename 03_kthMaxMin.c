// Find the "Kth" max and min element of an array 


#include<stdio.h>

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void sort(int *arr){
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > arr[i+1]){
            swap(&arr[i], &arr[i+1]);
        }
    }
}

int main(){

    int arr[6] = {12, 21, 34, 64, 76, 2};
    int k;


    printf("Enter Value which you want to find Min and Max : ");
    scanf("%d", &k);
    sort(arr);
    printf("Sorted Array is...\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // printf("%dth Smallest Element is %d\n", k, arr[k-1]);
    // printf("%dth Largest Element is %d\n", k, arr[6-k-1]);

    return 0;
}