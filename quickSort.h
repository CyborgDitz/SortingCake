#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "items.h"

// Generic swap
void swapItemData(ItemData* a, ItemData* b);

// Partition & quicksort by Price
int partitionByPrice(ItemData arr[], int low, int high);
void quickSortByPrice(ItemData arr[], int low, int high);

// Partition & quicksort by Weight
int partitionByWeight(ItemData arr[], int low, int high);
void quickSortByWeight(ItemData arr[], int low, int high);

// Partition & quicksort by Quantity
int partitionByQuantity(ItemData arr[], int low, int high);
void quickSortByQuantity(ItemData arr[], int low, int high);

// Partition & quicksort by Date
int partitionByDate(ItemData arr[], int low, int high);
void quickSortByDate(ItemData arr[], int low, int high);

// Print the contents of a (sorted) array
void printItemsSortedByPrice(const ItemData arr[], int count);
void printItemsSortedByWeight(const ItemData arr[], int count);
void printItemsSortedByQuantity(const ItemData arr[], int count);
void printItemsSortedByDate(const ItemData arr[], int count);

// High-level sorting "entry points"
void sortPrice(void);
void sortWeight(void);
void sortQuantity(void);
void sortDate(void);

#endif // QUICKSORT_H
