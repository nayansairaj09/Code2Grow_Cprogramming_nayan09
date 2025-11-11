#include <stdio.h>

int main() {
    int n, i;
    int marks[10];
    int total = 0, highest = -1, lowest = 101;
    int pass = 0, fail = 0;
    int a_plus = 0, a = 0, b = 0, c = 0, d = 0;

    printf("========= Student Performance Analyzer =========\n");
    printf("Enter total number of students (max 10): ");
    scanf("%d", &n);

    printf("Enter marks for each student:\n");

    for(i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];

        if(marks[i] > highest)
            highest = marks[i];

        if(marks[i] < lowest)
            lowest = marks[i];

        if(marks[i] >= 90) {
            a_plus++;
            pass++;
        }
        else if(marks[i] >= 80) {
            a++;
            pass++;
        }
        else if(marks[i] >= 70) {
            b++;
            pass++;
        }
        else if(marks[i] >= 60) {
            c++;
            pass++;
        }
        else if(marks[i] >= 50) {
            d++;
            pass++;
        }
        else {
            fail++;
        }
    }

    float average = (float) total / n;

    printf("\n========= Result Summary =========\n");
    printf("Average Marks: %.2f\n", average);
    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks : %d\n", lowest);

    printf("\nTotal Passed Students: %d\n", pass);
    printf("Total Failed Students: %d\n", fail);

    printf("\nGrade Distribution:\n");
    printf("A+ : %d\n", a_plus);
    printf("A  : %d\n", a);
    printf("B  : %d\n", b);
    printf("C  : %d\n", c);
    printf("D  : %d\n", d);
    printf("Fail: %d\n", fail);

    printf("==================================\n");
return 0;
}
