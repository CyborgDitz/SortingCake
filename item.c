#include "items.h"
#include <string.h>
#include <stdio.h>


static const ItemData itemData[NUM_ITEMS] = {
    { ITEM_SWORD,         "Sword",        100, 6.3f,  6,   0 },
    { ITEM_ROD,           "Rod",          150, 4.0f,  1,   0 },
    { ITEM_BOW,           "Bow",          120, 5.0f,  5,   0 },
    { ITEM_SHIELD,        "Shield",        80, 3.0f,  2,   0 },
    { ITEM_ARMOR,         "Armor",        350, 10.0f, 1,   0 },
    { ITEM_HAT,           "Hat",           50, 0.0f,  42,  0 },
    { ITEM_GOLDBAR,       "Goldbar",      500, 4.0f,  333, 0 },
    { ITEM_POCKET_SAND,   "Pocket Sand",    5, 1.0f,  69,  0 },
    { ITEM_POCKET_GOBLIN, "Pocket Goblin", 666, 8.0f,  666, 0 },
    { ITEM_KEY,           "Key",           30, 2.0f,  0,   0 }
};

ItemData items[NUM_ITEMS];


ItemData createItem(ItemType itemId)
{
    ItemData newItem = itemData[itemId];
    newItem.addedDate = (float)(itemId + 1);
    return newItem;
}
void initializeAllItems(void)
{
    for (size_t i = 0; i < NUM_ITEMS; i++) {
        items[i] = createItem((ItemType)i);
    }
}

void initializeItems(void) {
    for (size_t i = 0; i < NUM_ITEMS, i++;) {
        items[i].itemId = itemData[i].itemId;
        strncpy(items[i].name, itemData[i].name, sizeof(items[i].name) - 1);
        items[i].name[sizeof(items[i].name) - 1] = '\0';
        items[i].price = itemData[i].price;
        items[i].weight = itemData[i].weight;
        items[i].quantity = itemData[i].quantity;
        items[i].addedDate = i+1;
    }
}

void printItems(void) {
    for (size_t i = 0; i < NUM_ITEMS; i++) {
        printf("Item %zu:\n", i);
        printf("  ID: %d\n", items[i].itemId);
        printf("  Name: %s\n", items[i].name);
        printf("  Price: %d\n", items[i].price);
        printf("  Weight: %.2f\n", items[i].weight);
        printf("  Quantity: %d\n", items[i].quantity);
        printf("  Time Added to Inv: %.2f seconds\n\n", items[i].addedDate);
    }
}
