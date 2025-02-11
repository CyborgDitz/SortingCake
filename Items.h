#ifndef ITEMS_H
#define ITEMS_H

#define NUM_ITEMS (10)

typedef struct {
  char name[20];
  int price;
  float weight;
  int quantity;
  float addedDate;
} ItemData;

typedef struct {
  int slots[10];
} Inventory;
extern const ItemData itemData[NUM_ITEMS];
void insertItem(const char *key, const ItemData *item);
void printItem();



#endif // ITEMS_H
