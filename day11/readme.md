# Day11_MiniBankTransaction
**Student Name:** CH. Nayan  
**Roll No:** AP25110090157  
**Challenge:** Day 11 - Mini Bank Transaction System  

## Description
This C program allows users to perform basic banking operations such as check balance, deposit, withdraw, and exit.  
It limits transactions to 5 per session and shows a transaction summary upon exit.

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
Welcome to mini bank transaction
1. CHECK BALANCE
2. DEPOSIT
3. WITHDRAW
4. EXIT
Enter your choice: 2
Enter amount to deposit: 5000
amount deposited successfully!
final balance after deposited: 15000.00
Enter your choice: 3
Enter amount to withdraw: 2000
Withdrawal successful!
remaining balance is: 13000.00
transaction summery
total transaction2
final balance13000.00
```
