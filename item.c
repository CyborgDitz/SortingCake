#include "items.h"
#include <string.h>

Item myItem;

void initializeItem() {
    myItem.itemType = ITEM_SWORD;
    strcpy(myItem.name, "Sword");
    myItem.price = 100;
    myItem.quantity = 1;
    myItem.weight = 1;
    memset(myItem.addedDate, 0, sizeof(myItem.addedDate));
}