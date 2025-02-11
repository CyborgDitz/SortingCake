#include "items.h"
#include <string.h>
#include <stdio.h>


extern const ItemData itemData[NUM_ITEMS] = {
    {         "Sword",        100, 6.3f,  6,   0 },
    {            "Rod",          150, 4.0f,  1,   0 },
    {           "Bow",          120, 5.0f,  5,   0 },
    {         "Shield",        80, 3.0f,  2,   0 },
    {         "Armor",        350, 10.0f, 1,   0 },
    {            "Hat",           50, 0.0f,  42,  0 },
    {        "Goldbar",      500, 4.0f,  333, 0 },
    {    "Pocket Sand",    5, 1.0f,  69,  0 },
    {  "Pocket Goblin", 666, 8.0f,  666, 0 },
    {         "Key",           30, 2.0f,  0,   0 }
};
//todo replace with hashtable

ItemData items[NUM_ITEMS];

void initializeItems() {
    for (size_t i = 0; i < NUM_ITEMS; i++){
        strncpy(items[i].name, itemData[i].name, sizeof(items[i].name) - 1);
        items[i].name[sizeof(items[i].name) - 1] = '\0';
        items[i].price = itemData[i].price;
        items[i].weight = itemData[i].weight;
        items[i].quantity = itemData[i].quantity;
        items[i].addedDate = i+1;
    }
}

void printItem(const ItemData *item) {
    if (!item) {
        printf("Item is NULL\n");
        return;
    }
    printf("Name: %s\n",    item->name);
    printf("Price: %d\n",   item->price);
    printf("Weight: %.2f\n", item->weight);
    printf("Quantity: %d\n", item->quantity);
    printf("Time Added: %.2f\n", item->addedDate);
    printf("\n");

}