#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "items.h"


void swapItemData(ItemData *a, ItemData *b);

int partitionByPrice(ItemData arr[], int low, int high);
void quickSortByPrice(ItemData arr[], int low, int high);
void printItemsSortedByPrice();

int partitionByWeight(ItemData arr[], int low, int high);
void quickSortByWeight(ItemData arr[], int low, int high);
void printItemsSortedByWeight();

int partitionByQuantity(ItemData arr[], int low, int high);
void quickSortByQuantity(ItemData arr[], int low, int high);
void printItemsSortedByQuantity();

int partitionByDate(ItemData arr[], int low, int high);
void quickSortByDate(ItemData arr[], int low, int high);
void printItemsSortedByDate();

void sortPrice();
void sortWeight();
void sortQuantity();
void sortDate();
#endif // QUICKSORT_H
