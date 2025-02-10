//
// Created by sebba on 2/10/2025.
//

#ifndef ITEMS_H
#define ITEMS_H
typedef enum {
  ITEM_NONE,
  ITEM_SWORD,
  ITEM_ROD,
  ITEM_BOW,
  ITEM_SHIELD,
  ITEM_ARMOR,
  ITEM_HAT,
  ITEM_GOLDBAR,
  ITEM_POCKET_SAND,
  ITEM_POCKET_GOBLIN,
  ITEM_KEY,
} ItemType;
typedef struct {
    char name[10];
    int price;
    int weight;
    int quantity;
    int addedDate[10];
  ItemType itemType;
  } Item;
typedef struct {
  int slots[10];
  }Inventory;


#endif //ITEMS_H
