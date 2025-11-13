#include <stdio.h>
int main()
 {
    // ---  Student Identification ---
    char name[50], regNo[20], section[10];
    printf("========= Employee Salary Analysis System =========\n");

    printf("Enter Student Name: ");
    scanf("%[^\n]", name); // read full name with spaces

    printf("Enter Registration Number: ");
    scanf("%s", regNo);

    printf("Enter Section: ");
    scanf("%s", section);

    // ---  Input Employee Salary Data ---
    int n, i;
    float salary[10], total = 0, avg, highest, lowest;

    printf("\nEnter number of employees (max 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid number of employees!\n");
        return 0;
    }

    printf("Enter salaries:\n");
    for (i = 0; i < n; i++) {
        printf("%d: ", i + 1);
        scanf("%f", &salary[i]);
        total += salary[i];
    }

    // --- Menu System ---
    int choice;
    do {
        printf("\n========= MENU =========\n");
        printf("1. Display All Salaries\n");
        printf("2. Display Total and Average Salary\n");
        printf("3. Display Highest and Lowest Salary\n");
        printf("4. Count Employees Above and Below Average\n");
        printf("5. Display Sorted Salaries (Ascending)\n");
        printf("6. Exit\n");
        printf("========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nAll Salaries:\n");
                for (i = 0; i < n; i++)
                    printf("Employee %d: %.2f\n", i + 1, salary[i]);
                break;

            case 2:
                avg = total / n;
                printf("\nTotal Salary = %.2f\n", total);
                printf("Average Salary = %.2f\n", avg);
                break;

            case 3:
                highest = lowest = salary[0];
                for (i = 1; i < n; i++) {
                    if (salary[i] > highest)
                        highest = salary[i];
                    if (salary[i] < lowest)
                        lowest = salary[i];
                }
                printf("\nHighest Salary = %.2f\n", highest);
                printf("Lowest Salary = %.2f\n", lowest);
                break;

            case 4:
                avg = total / n;
                int above = 0, below = 0;
                for (i = 0; i < n; i++) {
                    if (salary[i] > avg)
                        above++;
                    else if (salary[i] < avg)
                        below++;
                }
                printf("\nAverage Salary = %.2f\n", avg);
                printf("Employees Above Average = %d\n", above);
                printf("Employees Below Average = %d\n", below);
                break;

            case 5:
                // --- Bubble Sort (Ascending) ---
                for (int j = 0; j < n - 1; j++) {
                    for (i = 0; i < n - j - 1; i++) {
                        if (salary[i] > salary[i + 1]) {
                            float temp = salary[i];
                            salary[i] = salary[i + 1];
                            salary[i + 1] = temp;
                        }
                    }
                }
                printf("\nSorted Salaries (Ascending):\n");
                for (i = 0; i < n; i++)
                    printf("%.2f ", salary[i]);
                printf("\n");
                break;

            case 6:
                printf("\nExiting Program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

        // --- Display Student Info in Each Output ---
        printf("\nSubmitted by: %s | Reg No: %s | Section: %s\n", name, regNo, section);
        printf("Challenge Day 17 – Code2Grow Program\n");

    } while (choice != 6);

    return 0;
}
