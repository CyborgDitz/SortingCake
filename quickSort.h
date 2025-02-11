#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "items.h"

void swapItemData(ItemData* a, ItemData* b);


int partitionByPrice(ItemData arr[], int low, int high);
void quickSortByPrice(ItemData arr[], int low, int high);


int partitionByWeight(ItemData arr[], int low, int high);
void quickSortByWeight(ItemData arr[], int low, int high);

int partitionByQuantity(ItemData arr[], int low, int high);
void quickSortByQuantity(ItemData arr[], int low, int high);


int partitionByDate(ItemData arr[], int low, int high);
void quickSortByDate(ItemData arr[], int low, int high);

void printItemsSortedByPrice(const ItemData arr[], int count);
void printItemsSortedByWeight(const ItemData arr[], int count);
void printItemsSortedByQuantity(const ItemData arr[], int count);
void printItemsSortedByDate(const ItemData arr[], int count);

void sortPrice(void);
void sortWeight(void);
void sortQuantity(void);
void sortDate(void);

#endif // QUICKSORT_H
