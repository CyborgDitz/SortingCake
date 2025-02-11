#include <stdio.h>
#include "quickSort.h"
#include "Items.h"


int main() {
    int data[] = {8, 7, 2, 1, 0, 9, 6};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Unsorted array: ");
    printArray(data, n);

    quickSort(data, 0, n - 1);

    printf("Sorted array: ");
    printArray(data, n);
    initializeAllItems();
    //initializeItems();
    printItems();
    printf("Item ID: %d\n", items[2].itemId);
    return 0;
}