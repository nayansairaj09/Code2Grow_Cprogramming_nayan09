#Nayn sai raj
#AP25110090157
# Inventory Management System

This project is a simple C-based **Inventory Management System** that allows users to:

1. Add product details  
2. Display all stored products  
3. Analyze total inventory value  
4. Search products by ID  
5. Exit the program  
## Description
this program is a simple and user friendly inventory management system designed to help store , track and analyze product information. it allows the user to manage 
product details such as ID, name , quantity and price through an interactive menu.Each option in the menu performs a specific task that makes inventory handling
easier and organized.
## Features
- Stores up to 15 products  
- Calculates highest and lowest valued products  
- Displays detailed product information  
- User-friendly menu-driven interface  

## Files Included
- **inventory.c** — Main C program  
- **README.txt** — Project explanation  

## How to Run
1. Open a C compiler (GCC recommended)
2. Compile using:  
   ```
   gcc inventory.c -o inventory
   ```
3. Run using:  
   ```
   ./inventory
   ```

## Author
Nayan Sai Raj  
AP25110090157
##output
========== Inventory Management System ==========
1. Add Product Details
2. Display All Products
3. Inventory Value Analysis
4. Search Product by ID
5. Exit
Enter your choice: 1

Enter Product ID: 15
Enter Product Name: Nike Shoes 
Enter Quantity: 15
Enter Price: 8500
PRODUCT ADDED SUCESSFULLY!

========== Inventory Management System ==========
1. Add Product Details
2. Display All Products
3. Inventory Value Analysis
4. Search Product by ID
5. Exit
Enter your choice: 2

===== Product List =====

Product 1:
ID: 15
Name: Nike Shoes
Quantity: 15
Price: 8500.00

========== Inventory Management System ==========
1. Add Product Details
2. Display All Products
3. Inventory Value Analysis
4. Search Product by ID
5. Exit
Enter your choice: 3

Total Inventory Value: 127500.00

Product with Highest Value:
ID: 15
Name: Nike Shoes
Value: 127500.00

Product with Lowest Value:
ID: 15
Name: Nike Shoes
Value: 127500.00

========== Inventory Management System ==========
1. Add Product Details
2. Display All Products
3. Inventory Value Analysis
4. Search Product by ID
5. Exit
Enter your choice: 4
Enter Product ID to Search: 15

Product Found:
ID: 15
Name: Nike Shoes
Quantity: 15
Price: 8500.00

========== Inventory Management System ==========
1. Add Product Details
2. Display All Products
3. Inventory Value Analysis
4. Search Product by ID
5. Exit
Enter your choice: 5
EXITING THE SYSTEM...
