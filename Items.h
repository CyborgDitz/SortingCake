  #ifndef ITEMS_H
  #define ITEMS_H

  #define NUM_ITEMS (10)

typedef enum {
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
  ITEM_COUNT
} ItemType;


  typedef struct {
    ItemType itemId;
    char name[20];
    int price;
    float weight;
    int quantity;
    float addedDate;
  } ItemData;

  typedef struct {
    int slots[10];
  } Inventory;

  extern ItemData items[NUM_ITEMS];

  void initializeItems(void);
  void initializeAllItems(void);
  void printItems(void);

  #endif // ITEMS_H
