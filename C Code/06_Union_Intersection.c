// UNION of 2 sorted set

#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

struct Array *Union(struct Array * a1, struct Array * a2){
    int i, j, k;
    i = j = k = 0;
    struct Array *a3;
    a3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < a1->length && j < a2->length){
        if (a1->A[i] < a2->A[j]){
            a3->A[k] = a1->A[i];
            i++; k++;
        }
        else if (a1->A[i] == a2->A[j]){
            a3->A[k] = a1->A[i];
            i++; j++; k++;
        }
        else{
            a3->A[k] = a2->A[j];
            j++; k++;
        }
    }
    for (; i < a1->length; i++)
    {
        a3->A[k] = a1->A[i];
        k++;
    }
    for (; j < a2->length; j++)
    {
        a3->A[k] = a2->A[j];
        k++;
    }

    a3->length = k;
    a3->size = 10;
    return a3;
}

struct Array * Intersection(struct Array * a1, struct Array * a2){
    int i, j, k;
    i = j = k = 0;
    struct Array * a3;
    a3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < a1->length && j < a2->length){
        if (a1->A[i] < a2->A[j]){
            i++;
        }
        else if (a1->A[i] == a2->A[j]){
            a3->A[k] = a1->A[i];
            i++; j++; k++;
        }
        else{
            j++;
        }
    }
    a3->length = k;
    a3->size = 10;
    return a3;
}

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(){

    struct Array a1 = {{2, 4, 6, 9, 11}, 10, 5};
    struct Array a2 = {{4, 7, 9, 11, 17}, 10, 5};
    struct Array *a3;

    a3 = Intersection(&a1, &a2);
    display(a3->A, a3->length);

    return 0;
}