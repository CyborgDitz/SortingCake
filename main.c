#include <stdio.h>
#include "quickSort.h"

int main() {
    int data[] = {8, 7, 2, 1, 0, 9, 6};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Unsorted array: ");
    printArray(data, n);

    // Call quickSort on the array
    quickSort(data, 0, n - 1);

    printf("Sorted array: ");
    printArray(data, n);

    return 0;
}