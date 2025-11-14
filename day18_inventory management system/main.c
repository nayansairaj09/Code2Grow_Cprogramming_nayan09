# Nayan Sai Raj
  #AP25110090157
   Day 18 - Inventory Management System
#include <stdio.h>

int main() 
{
    int productID[15], quantity[15];
    float price[15];
    char name[10][50];

    int totalProducts = 0;
    int choice, searchID;
    
    while (1) 
    {
        printf("\n========== Inventory Management System ==========\n");
        printf("1. Add Product Details\n");
        printf("2. Display All Products\n");
        printf("3. Inventory Value Analysis\n");
        printf("4. Search Product by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        if (choice == 1)
         {
            if (totalProducts == 15) 
            {
                printf("MAXIMUM LIMIT REACHED! CANNOT ADD MORE PRODUCTS.\n");
                continue;
            }

            printf("\nEnter Product ID: ");
            scanf("%d", &productID[totalProducts]);
            getchar();

            printf("Enter Product Name: ");
            scanf("%[^\n]", name[totalProducts]);
            getchar();

            printf("Enter Quantity: ");
            scanf("%d", &quantity[totalProducts]);

            printf("Enter Price: ");
            scanf("%f", &price[totalProducts]);

            totalProducts++;
            printf("PRODUCT ADDED SUCESSFULLY!\n");
        }

        else if (choice == 2) {
            if (totalProducts == 0) {
                printf("NO PRODUCTS AVAILABLE!\n");
                continue;
            }

            printf("\n===== Product List =====\n");
            for (int i = 0; i < totalProducts; i++) 
            {
                printf("\nProduct %d:\n", i + 1);
                printf("ID: %d\n", productID[i]);
                printf("Name: %s\n", name[i]);
                printf("Quantity: %d\n", quantity[i]);
                printf("Price: %.2f\n", price[i]);
            }
        }

        else if (choice == 3) 
        {
            if (totalProducts == 0)
             {
                printf("No products available to analyze!\n");
                continue;
            }

            float totalValue = 0, highestValue = -1, lowestValue = 999999;
            int highIndex = 0, lowIndex = 0;

            for (int i = 0; i < totalProducts; i++)
             {
                float currentValue = quantity[i] * price[i];
                totalValue += currentValue;

                if (currentValue > highestValue) {
                    highestValue = currentValue;
                    highIndex = i;
                }
                if (currentValue < lowestValue) {
                    lowestValue = currentValue;
                    lowIndex = i;
                }
            }

            printf("\nTotal Inventory Value: %.2f\n", totalValue);

            printf("\nProduct with Highest Value:\n");
            printf("ID: %d\nName: %s\nValue: %.2f\n",
                productID[highIndex], name[highIndex], highestValue);

            printf("\nProduct with Lowest Value:\n");
            printf("ID: %d\nName: %s\nValue: %.2f\n",
                productID[lowIndex], name[lowIndex], lowestValue);
        }

        else if (choice == 4) 
        {
            if (totalProducts == 0) 
            {
                printf("NO PRODUCTS AVAILABLE IN SEARCH!\n");
                continue;
            }

            printf("Enter Product ID to Search: ");
            scanf("%d", &searchID);

            int found = 0;
            for (int i = 0; i < totalProducts; i++)
             {
                if (productID[i] == searchID)
                 {
                    printf("\nProduct Found:\n");
                    printf("ID: %d\n", productID[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Quantity: %d\n", quantity[i]);
                    printf("Price: %.2f\n", price[i]);
                    found = 1;
                    break;
                }
            }

            if (!found) 
            {
                printf("PRODUCT NOT FOUND!\n");
            }
        }

        else if (choice == 5) 
        {
            printf("EXITING THE SYSTEM...\n");
            break;
        }

        else 
        {
            printf("INVALID CHOICE! Try again.\n");
        }
    }

    return 0;
}
