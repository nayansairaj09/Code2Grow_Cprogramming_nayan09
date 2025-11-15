Nayan Sai Raj
AP25110090157
#Aproach
I used 2d arrays to store attendance and marks then applied nested loops to calculate totals, averages and rankings.A menu driven interface allows the teacher to easily
view attendace,perfomance and grades through clear reports.
## Build Commands
### Linux/macOS:
```bash
mkdir -p build
gcc -std=c11 -Wall -Wextra -O2 main.c -o build/program
##output
========== Student Attendance & Performance Matrix ==========

Enter names of 5 students:
Student 1: nayan
Student 2: aditya
Student 3: kushwanth
Student 4: gagan
Student 5: pardhu

Enter Attendance Matrix (1 = Present, 0 = Absent):

For nayan:
  Subject 1: 1
  Subject 2: 1
  Subject 3: 1
  Subject 4: 1
  Subject 5: 0

For aditya:
  Subject 1: 1
  Subject 2: 1
  Subject 3: 1
  Subject 4: 1
  Subject 5: 1

For kushwanth:
  Subject 1: 1
  Subject 2: 1
  Subject 3: 1
  Subject 4: 1
  Subject 5: 0

For gagan:
  Subject 1: 1
  Subject 2: 1
  Subject 3: 1
  Subject 4: 1
  Subject 5: 1

For pardhu:
  Subject 1: 1
  Subject 2: 1
  Subject 3: 1
  Subject 4: 1
  Subject 5: 0

Enter Marks Matrix (0–100):

For nayan:
  Subject 1: 75
  Subject 2: 80
  Subject 3: 60
  Subject 4: 75
  Subject 5: 0

For aditya:
  Subject 1: 100
  Subject 2: 100
  Subject 3: 100
  Subject 4: 100
  Subject 5: 99

For kushwanth:
  Subject 1: 80
  Subject 2: 80
  Subject 3: 75
  Subject 4: 75
  Subject 5: 90

For gagan:
  Subject 1: 99
  Subject 2: 99
  Subject 3: 99
  Subject 4: 99
  Subject 5: 85

For pardhu:
  Subject 1: 95
  Subject 2: 80
  Subject 3: 75
  Subject 4: 75
  Subject 5: 0

=========== MENU ===========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
============================
Enter your choice: 1

---------------------------------------
Attendance Matrix (1 = Present, 0 = Absent):
nayan: 1 1 1 1 0 
aditya: 1 1 1 1 1 
kushwanth: 1 1 1 1 0 
gagan: 1 1 1 1 1 
pardhu: 1 1 1 1 0 

=========== MENU ===========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
============================
Enter your choice: 2

---------------------------------------
Marks Matrix:
nayan: 75 80 60 75 0 
aditya: 100 100 100 100 99 
kushwanth: 80 80 75 75 90 
gagan: 99 99 99 99 85 
pardhu: 95 80 75 75 0 

=========== MENU ===========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
============================
Enter your choice: 3

---------------------------------------
===== Attendance Report =====
nayan → Present: 4 | Absent: 1
aditya → Present: 5 | Absent: 0
kushwanth → Present: 4 | Absent: 1
gagan → Present: 5 | Absent: 0
pardhu → Present: 4 | Absent: 1

Highest Attendance: aditya (5 days)
Lowest Attendance: nayan (4 days)

=========== MENU ===========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
============================
Enter your choice: 4

---------------------------------------
===== Performance Report =====
nayan → Total: 290 | Average: 58.00
aditya → Total: 499 | Average: 99.80
kushwanth → Total: 400 | Average: 80.00
gagan → Total: 481 | Average: 96.20
pardhu → Total: 325 | Average: 65.00

Class Topper: aditya (499 marks)
Lowest Performer: nayan (290 marks)

=========== MENU ===========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
============================
Enter your choice: 5

---------------------------------------
===== Grade Report =====
nayan → Average: 58.00 | Grade: D
aditya → Average: 99.80 | Grade: l
kushwanth → Average: 80.00 | Grade: A
gagan → Average: 96.20 | Grade: l
pardhu → Average: 65.00 | Grade: C

=========== MENU ===========
1. Display Attendance Matrix
2. Display Marks Matrix
3. Attendance Report
4. Performance Report
5. Grade Report
6. Exit
============================
Enter your choice: 6

---------------------------------------
Exiting program... Thank you!
