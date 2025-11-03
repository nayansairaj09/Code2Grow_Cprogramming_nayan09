# Day10_RestaurantBillingFeedback
**Student Name:** CH. Nayan  
**Roll No:** AP25110090157  
**Challenge:** Day 10 - Restaurant Billing Feedback System  

## Description
This C program simulates a restaurant billing system where customers can order items by code and quantity.  
It calculates the total amount, applies a 10%% discount for bills above ₹500, and shows a canteen summary with total revenue.

## Build Commands
### Linux/macOS:
```
mkdir -p build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program
```

### Windows (MinGW):
```
mkdir build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program.exe
```

## Run Commands
### Linux/macOS:
```
./build/program
```

### Windows:
```
build\program.exe
```

## Output Example
```
Enter total number of customers: 1
--- Customer 1 ---
Enter number of items: 2
Code  Item Name     Price (₹)
1     Sandwich      80
2     Burger        120
Enter item code: 1
Enter quantity: 2
Sandwich x 2 = 160
Enter item code: 2
Enter quantity: 3
Burger x 3 = 360
Total: 520.00
Discount after 10 percentage : 52.00
Final Bill: 468.00

Canteen Summary 
Total Customers Served: 1
Total Revenue: ₹468
```
