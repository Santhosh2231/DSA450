#include<stdio.h>

// Function to print the Array
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Function to Clock Wise Rotate array once
void CyclicRotateClockWise(int * a, int n){
    int temp;
    temp = a[n-1]; // store last element of array in a Variable
    for (int i = n-2; i >= 0; i--)
    {
        a[i+1] = a[i]; // Copy elements to its successor position
    }
    a[0] = temp; // set last element to First
}

int main(){

    int a[6] = {6, 5, 4, 3, 2, 1}; 
    CyclicRotateClockWise(a, 6);
    display(a, 6);  
    return 0;
}