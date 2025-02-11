#include "items.h"
#include "items.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef HASHING_H
#define HASHING_H
#define TABLE_SIZE 10

typedef struct {
    char key[20];
    ItemData data;
    struct HashNode *next;
} HashNode;

extern HashNode* hashTable[TABLE_SIZE];

unsigned int hashFunction(const char *key);

ItemData* findItem(const char *key);
void freeHashTable(void);

void initializeHashTable(void);
int collectAllItems(ItemData arr[], int maxSize);
#endif //HASHING_H
