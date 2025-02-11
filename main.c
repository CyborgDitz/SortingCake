#include <stdio.h>
#include "quickSort.h"
#include "Items.h"

int main(void)
{
    initializeItems();
    int choice = -1;

    while (1) {
        printf("\nChoose an option:\n");
        printf("1 -> Sort by Price\n");
        printf("2 -> Sort by Weight\n");
        printf("3 -> Sort by Quantity\n");
        printf("4 -> Sort by Date\n");
        printf("6 -> Print All Item Data\n");
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
            case 6:
                printItems();
            break;
            default:
                printf("Invalid choice. Please choose an option between 0 and 6.\n");
            break;
        }
    }

    return 0;
}
