#include <stdio.h>

int main() {
    // --- Initialize Menu Data ---
    // Prices for 5 items on the cafe menu
    int itemPrice[5] = {50, 30, 80, 120, 60};

    // Names of the menu items
    char itemName[5][20] = {"Coffee", "Tea", "Sandwich", "Burger", "Pastry"};

    // Array to track how many of each item were sold
    int itemCount[5] = {0, 0, 0, 0, 0};

    // --- Declare variables for billing and summary ---
    int totalCustomers, numItems, itemNo, quantity;
    int totalRevenue = 0;
    int totalItemsSold = 0;

    // ---  Display the cafe menu ---
    printf("========= Café Order Management System =========\n");
    printf("Today's Menu:\n");
    printf("1. Coffee\t₹50\n");
    printf("2. Tea\t\t₹30\n");
    printf("3. Sandwich\t₹80\n");
    printf("4. Burger\t₹120\n");
    printf("5. Pastry\t₹60\n");
    printf("===============================================\n");

    // ---  Input total number of customers ---
    printf("Enter total number of customers (max 10): ");
    scanf("%d", &totalCustomers);

    // ---  Process each customer's order ---
    for (int i = 1; i <= totalCustomers; i++) 
    {
        int customerBill = 0; // Total for one customer

        printf("\n--- Customer %d ---\n", i);
        printf("Enter number of items to order: ");
        scanf("%d", &numItems);

        printf("Enter item number and quantity (e.g., 1 2 for 2 Coffees):\n");

        // Loop through each item the customer orders
        for (int j = 0; j < numItems; j++) {
            scanf("%d %d", &itemNo, &quantity);

            // Check if item number is valid
            if (itemNo >= 1 && itemNo <= 5) {
                // Calculate cost and update totals
                customerBill += itemPrice[itemNo - 1] * quantity;
                itemCount[itemNo - 1] += quantity;
                totalItemsSold += quantity;
            } else {
                printf("Invalid item number! Skipping...\n");
            }
        }

        // Display bill for this customer
        printf("Total Bill for Customer %d: ₹%d\n", i, customerBill);
        totalRevenue += customerBill;
    }

    // --- Find most and least ordered items ---
    int mostOrderedIndex = 0;
    int leastOrderedIndex = 0;

    for (int i = 1; i < 5; i++) 
    {
        if (itemCount[i] > itemCount[mostOrderedIndex]) {
            mostOrderedIndex = i;
        }
        if (itemCount[i] < itemCount[leastOrderedIndex]) {
            leastOrderedIndex = i;
        }
    }

    // ---  Display café summary ---
    printf("\n========= Café Summary =========\n");
    printf("Total Revenue: ₹%d\n", totalRevenue);
    printf("Total Items Sold: %d\n", totalItemsSold);
    printf("Most Ordered Item: %s\n", itemName[mostOrderedIndex]);
    printf("Least Ordered Item: %s\n", itemName[leastOrderedIndex]);
    printf("================================\n");

    return 0;
}
