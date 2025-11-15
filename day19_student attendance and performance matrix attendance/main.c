Nayan sai raj
AP25110090157

#include <stdio.h>
int main() {
    // --- Basic Student Data ---
    char names[5][20];
    int attendance[5][5];
    int marks[5][5];

    // --- Processed Results Storage ---
    int totalAttendance[5], totalAbsence[5];
    int totalMarks[5];
    float avgMarks[5];

    // --- Helper Variables ---
    int i, j;
    int highestAttendance = -1, lowestAttendance = 999;
    int highestAttendanceIndex = 0, lowestAttendanceIndex = 0;

    int highestMarks = -1, lowestMarks = 999;
    int topperIndex = 0, lowestIndex = 0;

    int choice;

    printf("\n========== Student Attendance & Performance Matrix ==========\n\n");

    // --------------------------------------------------------------
    // 1. INPUT PHASE
    // --------------------------------------------------------------

    // --- Student Names ---
    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // --- Attendance Matrix Input ---
    printf("\nEnter Attendance Matrix (1 = Present, 0 = Absent):\n");
    for (i = 0; i < 5; i++) {
        printf("\nFor %s:\n", names[i]);
        for (j = 0; j < 5; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &attendance[i][j]);
        }
    }

    // --- Marks Matrix Input ---
    printf("\nEnter Marks Matrix (0–100):\n");
    for (i = 0; i < 5; i++) {
        printf("\nFor %s:\n", names[i]);
        for (j = 0; j < 5; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // --------------------------------------------------------------
    // 2. PROCESSING PHASE
    // --------------------------------------------------------------

    for (i = 0; i < 5; i++) {
        totalAttendance[i] = 0;
        totalMarks[i] = 0;

        for (j = 0; j < 5; j++) {
            totalAttendance[i] += attendance[i][j];
            totalMarks[i] += marks[i][j];
        }

        totalAbsence[i] = 5 - totalAttendance[i];
        avgMarks[i] = totalMarks[i] / 5.0;

        // --- Highest & Lowest Attendance ---
        if (totalAttendance[i] > highestAttendance) {
            highestAttendance = totalAttendance[i];
            highestAttendanceIndex = i;
        }
        if (totalAttendance[i] < lowestAttendance) {
            lowestAttendance = totalAttendance[i];
            lowestAttendanceIndex = i;
        }

        // --- Highest & Lowest Marks ---
        if (totalMarks[i] > highestMarks) {
            highestMarks = totalMarks[i];
            topperIndex = i;
        }
        if (totalMarks[i] < lowestMarks) {
            lowestMarks = totalMarks[i];
            lowestIndex = i;
        }
    }

    // --------------------------------------------------------------
    // 3. MENU SYSTEM
    // --------------------------------------------------------------

    do {
        printf("\n=========== MENU ===========\n");
        printf("1. Display Attendance Matrix\n");
        printf("2. Display Marks Matrix\n");
        printf("3. Attendance Report\n");
        printf("4. Performance Report\n");
        printf("5. Grade Report\n");
        printf("6. Exit\n");
        printf("============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("\n---------------------------------------\n");

        switch (choice) {
            
            case 1:
                printf("Attendance Matrix (1 = Present, 0 = Absent):\n");
                for (i = 0; i < 5; i++) {
                    printf("%s: ", names[i]);
                    for (j = 0; j < 5; j++) {
                        printf("%d ", attendance[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Marks Matrix:\n");
                for (i = 0; i < 5; i++) {
                    printf("%s: ", names[i]);
                    for (j = 0; j < 5; j++) {
                        printf("%d ", marks[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("===== Attendance Report =====\n");
                for (i = 0; i < 5; i++) {
                    printf("%s → Present: %d | Absent: %d\n",
                           names[i], totalAttendance[i], totalAbsence[i]);
                }
                printf("\nHighest Attendance: %s (%d days)\n",
                       names[highestAttendanceIndex], highestAttendance);
                printf("Lowest Attendance: %s (%d days)\n",
                       names[lowestAttendanceIndex], lowestAttendance);
                break;

            case 4:
                printf("===== Performance Report =====\n");
                for (i = 0; i < 5; i++) {
                    printf("%s → Total: %d | Average: %.2f\n",
                           names[i], totalMarks[i], avgMarks[i]);
                }
                printf("\nClass Topper: %s (%d marks)\n",
                       names[topperIndex], highestMarks);
                printf("Lowest Performer: %s (%d marks)\n",
                       names[lowestIndex], lowestMarks);
                break;

            case 5:
                printf("===== Grade Report =====\n");
                for (i = 0; i < 5; i++) {
                    char grade;

                    if (avgMarks[i] >= 90) grade = 'A'+('+'); // A+
                    else if (avgMarks[i] >= 80) grade = 'A';
                    else if (avgMarks[i] >= 70) grade = 'B';
                    else if (avgMarks[i] >= 60) grade = 'C';
                    else if (avgMarks[i] >= 50) grade = 'D';
                    else grade = 'F';

                    printf("%s → Average: %.2f | Grade: %c\n",
                           names[i], avgMarks[i], grade);
                }
                break;

            case 6:
                printf("Exiting program... Thank you!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
