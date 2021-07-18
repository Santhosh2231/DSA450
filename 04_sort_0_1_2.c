// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

#include <stdio.h>

void swap(int * a, int * b){
    int t;
    t = * a;
    *a = *b;
    *b = t;
}

void sort012(int a[], int n)
{   
    int l = 0, m = 0, h = n-1;
    while (m <= h){
        if (a[m] == 0){
            swap(&a[l], &a[m]);
            l++; m++;
        }
        else if (a[m] == 1)
            m++;
        else if (a[m] == 2){
            swap(&a[m], &a[h]);
            h--;
        }
    }
}

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}