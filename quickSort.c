#include <stdio.h>
#include "quickSort.h"// For collectAllItems()
#include "items.h"

// ----------------- SWAP -------------------
void swapItemData(ItemData *a, ItemData *b) {
    ItemData temp = *a;
    *a = *b;
    *b = temp;
}

// ----------------- PARTITION: PRICE -------------------
int partitionByPrice(ItemData arr[], int low, int high) {
    int pivot = arr[high].price;
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j].price <= pivot) {
            i++;
            swapItemData(&arr[i], &arr[j]);
        }
    }
    swapItemData(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSortByPrice(ItemData arr[], int low, int high) {
    if (low < high) {
        int pi = partitionByPrice(arr, low, high);
        quickSortByPrice(arr, low, pi - 1);
        quickSortByPrice(arr, pi + 1, high);
    }
}

void printItemsSortedByPrice(const ItemData arr[], int count) {
    printf("\n=== Items Sorted by Price ===\n\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s | Price: %d\n",
               arr[i].name, arr[i].price);
    }
    printf("\nSorting was done by: Price\n\n");
}

// ----------------- PARTITION: WEIGHT -------------------
int partitionByWeight(ItemData arr[], int low, int high) {
    float pivot = arr[high].weight;
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j].weight <= pivot) {
            i++;
            swapItemData(&arr[i], &arr[j]);
        }
    }
    swapItemData(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSortByWeight(ItemData arr[], int low, int high) {
    if (low < high) {
        int pi = partitionByWeight(arr, low, high);
        quickSortByWeight(arr, low, pi - 1);
        quickSortByWeight(arr, pi + 1, high);
    }
}

void printItemsSortedByWeight(const ItemData arr[], int count) {
    printf("\n=== Items Sorted by Weight ===\n\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s | Weight: %.2f\n",
               arr[i].name, arr[i].weight);
    }
    printf("\nSorting was done by: Weight\n\n");
}

// ----------------- PARTITION: QUANTITY -------------------
int partitionByQuantity(ItemData arr[], int low, int high) {
    int pivot = arr[high].quantity;
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j].quantity <= pivot) {
            i++;
            swapItemData(&arr[i], &arr[j]);
        }
    }
    swapItemData(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSortByQuantity(ItemData arr[], int low, int high) {
    if (low < high) {
        int pi = partitionByQuantity(arr, low, high);
        quickSortByQuantity(arr, low, pi - 1);
        quickSortByQuantity(arr, pi + 1, high);
    }
}

void printItemsSortedByQuantity(const ItemData arr[], int count) {
    printf("\n=== Items Sorted by Quantity ===\n\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s | Quantity: %d\n",
               arr[i].name, arr[i].quantity);
    }
    printf("\nSorting was done by: Quantity\n\n");
}

// ----------------- PARTITION: DATE -------------------
int partitionByDate(ItemData arr[], int low, int high) {
    float pivot = arr[high].addedDate;
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j].addedDate <= pivot) {
            i++;
            swapItemData(&arr[i], &arr[j]);
        }
    }
    swapItemData(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSortByDate(ItemData arr[], int low, int high) {
    if (low < high) {
        int pi = partitionByDate(arr, low, high);
        quickSortByDate(arr, low, pi - 1);
        quickSortByDate(arr, pi + 1, high);
    }
}

void printItemsSortedByDate(const ItemData arr[], int count) {
    printf("\n=== Items Sorted by Date Added ===\n\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s | AddedDate: %.2f\n",
               arr[i].name, arr[i].addedDate);
    }
    printf("\nSorting was done by: Date Added\n\n");
}

// --------------- "ENTRY POINT" SORTS ---------------
//
// Each of these collects items from the hash table,
// calls the quicksort, and prints the result.
//
void sortPrice() {
    // Collect all items from the hashtable
    // We'll assume a max of 100 items, but adjust as needed
    ItemData tempArray[100];
    int count = collectAllItems(tempArray, 100);

    // Now quick-sort them by price
    quickSortByPrice(tempArray, 0, count - 1);
    // Print
    printItemsSortedByPrice(tempArray, count);
}

void sortWeight() {
    ItemData tempArray[100];
    int count = collectAllItems(tempArray, 100);

    quickSortByWeight(tempArray, 0, count - 1);
    printItemsSortedByWeight(tempArray, count);
}

void sortQuantity() {
    ItemData tempArray[100];
    int count = collectAllItems(tempArray, 100);

    quickSortByQuantity(tempArray, 0, count - 1);
    printItemsSortedByQuantity(tempArray, count);
}

void sortDate() {
    ItemData tempArray[100];
    int count = collectAllItems(tempArray, 100);

    quickSortByDate(tempArray, 0, count - 1);
    printItemsSortedByDate(tempArray, count);
}
