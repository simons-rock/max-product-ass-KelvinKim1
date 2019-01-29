#include "max_product.h"

void swap(int a, int b, int*arr) {
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}


int max_pairwise_product_fast(int *arr, int size){
    int index = 0;
    for (int i = 1; i < size; i++){
        if (arr[index] < arr[i]){
            index = i;
        }
    }
    swap (index, size-1, arr);
    index = 0;
    for (int i = 1; i < size-1; i++){
        if (arr[index] < arr[i]){
            index = i;
        }
    }
    swap (index, size-2, arr);
    return arr[size-1]*arr[size-2];
}

