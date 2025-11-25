#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivotIndex = low + rand() % (high - low + 1);
    swap(&arr[pivotIndex], &arr[high]);  

    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int T;
    scanf_s("%d", &T);

    int* arr = (int*)malloc(T * sizeof(int));
    for (int i = 0; i < T; i++) {
        scanf_s("%d", &arr[i]);
    }

    
    srand(time(NULL));

    quickSort(arr, 0, T - 1);

    for (int i = 0; i < T; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}

