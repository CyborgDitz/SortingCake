#include "Hashing.h"
HashNode* hashTable[TABLE_SIZE] = { NULL };

unsigned int hashFunction(const char *key)
{
    unsigned int hashValue = 0;
    while (*key != '\0') {
        hashValue = (hashValue * 31) + (unsigned char)(*key);
        key++;
    }
    return hashValue % TABLE_SIZE;
}

void insertItem(const char *key, const ItemData *item)
{
    unsigned int bucketIndex = hashFunction(key);
    HashNode *newNode = (HashNode*)malloc(sizeof(HashNode));

    strncpy(newNode->key, key, sizeof(newNode->key) - 1);
    newNode->key[sizeof(newNode->key) - 1] = '\0';

    newNode->data = *item;
    newNode->next = hashTable[bucketIndex];
    hashTable[bucketIndex] = newNode;
}

ItemData* findItem(const char *key)
{
    unsigned int bucketIndex = hashFunction(key);
    HashNode *current = hashTable[bucketIndex];

    while (current != NULL) {

        if (strcmp(current->key, key) == 0) {

            return &current->data;
        }
        current = current->next;
    }

    return NULL;
}

void freeHashTable(void)
{
    for (int i = 0; i < TABLE_SIZE; i++) {
        HashNode *current = hashTable[i];
        while (current) {
            HashNode *toDelete = current;
            current = current->next;
            free(toDelete);
        }
        hashTable[i] = NULL;
    }
}

int collectAllItems(ItemData arr[], int maxSize) {
    int count = 0;
    for (int i = 0; i < TABLE_SIZE; i++) {
        HashNode* current = hashTable[i];
        while (current && count < maxSize) {
            arr[count++] = current->data;
            current = current->next;
        }
    }
    return count;
}
void initializeHashTable(void)
{
    for (int i = 0; i < NUM_ITEMS; i++) {
        ItemData temp = itemData[i];
        temp.addedDate = (float)(i + 1);


        insertItem(temp.name, &temp);
    }
}