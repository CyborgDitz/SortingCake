//
// Created by sebba on 2/10/2025.
//

#ifndef ITEMS_H
#define ITEMS_H
typedef struct {
    char name[10];
    int price;
    int weight;
    int quantity;
    int addedDate[10];
  } Item;
typedef struct {
  int slots[10];
  }Inventory;


#endif //ITEMS_H
