#include<stdio.h>

void swap(int * a, int * b){
    int t;
    t = * a;
    *a = *b;
    *b = t;
}

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(){

    int a[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int j = 0;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] < 0){
            swap(&a[i], &a[j]);
            j++;
        }
    }
    display(a, 9);
    return 0;
}