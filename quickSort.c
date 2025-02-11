#include <stdio.h>
#include "items.h"

void swapItemData(ItemData *a, ItemData *b) {
    ItemData temp = *a;
    *a = *b;
    *b = temp;
}

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

void printItemsSortedByPrice() {
    printf("\n=== Items Sorted by Price ===\n\n");
    for (size_t i = 0; i < NUM_ITEMS; i++) {
        printf("ID: %d | Name: %s | Price: %d\n",
               items[i].itemId, items[i].name, items[i].price);
    }
    printf("\nSorting was done by: Price\n\n");
}
int partitionByWeight(ItemData arr[], int low, int high) {
    float pivot = arr[high].weight;  // Pivot on 'weight'
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

void printItemsSortedByWeight() {
    printf("\n=== Items Sorted by Weight ===\n\n");
    for (size_t i = 0; i < NUM_ITEMS; i++) {
        printf("ID: %d | Name: %s | Weight: %.2f\n",
               items[i].itemId, items[i].name, items[i].weight);
    }
    printf("\nSorting was done by: Weight\n\n");
}
int partitionByQuantity(ItemData arr[], int low, int high) {
    int pivot = arr[high].quantity;  // Pivot on 'quantity'
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

void printItemsSortedByQuantity() {
    printf("\n=== Items Sorted by Quantity ===\n\n");
    for (size_t i = 0; i < NUM_ITEMS; i++) {
        printf("ID: %d | Name: %s | Quantity: %d\n",
               items[i].itemId, items[i].name, items[i].quantity);
    }
    printf("\nSorting was done by: Quantity\n\n");
}
int partitionByDate(ItemData arr[], int low, int high) {
    float pivot = arr[high].addedDate;  // Pivot on 'addedDate'
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

void printItemsSortedByDate() {
    printf("\n=== Items Sorted by Date Added ===\n\n");
    for (size_t i = 0; i < NUM_ITEMS; i++) {
        printf("ID: %d | Name: %s | AddedDate: %.2f\n",
               items[i].itemId, items[i].name, items[i].addedDate);
    }
    printf("\nSorting was done by: Date Added\n\n");
}

void sortPrice() {
    quickSortByPrice(items, 0, NUM_ITEMS - 1);
    printItemsSortedByPrice();
}
void sortWeight() {
    quickSortByWeight(items, 0, NUM_ITEMS - 1);
    printItemsSortedByWeight();
}
void sortQuantity() {
    quickSortByWeight(items, 0, NUM_ITEMS - 1);
    printItemsSortedByWeight();
}
void sortDate() {
    quickSortByDate(items, 0, NUM_ITEMS - 1);
    printItemsSortedByDate();
}