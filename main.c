#include <stdio.h>
#include <string.h>
#include "items.h"
#include "quickSort.h"
#include "hashing.h"


int main(void)
{
    initializeHashTable();

    const char* searchKey = "Bow";
    ItemData* foundItem = findItem(searchKey);
    if (foundItem) {
        printf("Found item '%s' in hash table:\n", searchKey);
        printItem(foundItem);
    } else {
        printf("Item '%s' not found.\n", searchKey);
    }

    int choice = -1;

    while (1) {
        printf("\nChoose an option:\n");
        printf("1 -> Sort by Price\n");
        printf("2 -> Sort by Weight\n");
        printf("3 -> Sort by Quantity\n");
        printf("4 -> Sort by Date\n");
        printf("6 -> Print All Item Data (unsorted)\n");
        printf("0 -> Exit\n");
        printf("\nEnter your choice (0-6): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting...\n");
            break;
        }

        switch (choice) {
            case 1:
                sortPrice();
                break;
            case 2:
                sortWeight();
                break;
            case 3:
                sortQuantity();
                break;
            case 4:
                sortDate();
                break;
            case 6: {
                // Collect and print all items unsorted
                ItemData arr[100];
                int count = collectAllItems(arr, 100);
                printf("\n=== Printing All Items (unsorted) ===\n\n");
                for (int i = 0; i < count; i++) {
                    printItem(&arr[i]);
                }
                break;
            }
            default:
                printf("Invalid choice. Please choose between 0 and 6.\n");
                break;
        }
    }

    // Cleanup
    freeHashTable();
    return 0;
}
