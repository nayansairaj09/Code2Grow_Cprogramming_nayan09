AP25110090157
Nayan sai raj

#include <stdio.h>
#include <stdlib.h>

#define MAX 30
#define SPEED_LIMIT 80
void inputData(int vehicleID[], int speed[], int lane[], int *n);
int countSpeedViolations(int speed[], int n, int *highest, int *lowest);
int countLaneViolations(int vehicleID[], int lane[], int n, int *maxSeverityVeh);
int busiestLane(int laneCount[]);
int leastBusyLane(int laneCount[]);
void displayReport(int vehicleID[], int speed[], int lane[], int n);
int main() 
{
    int vehicleID[MAX], speed[MAX], lane[MAX];
    int n;
    inputData(vehicleID, speed, lane, &n);
    int laneCount[4] = {0};
    for (int i = 0; i < n; i++) {
        laneCount[lane[i] - 1]++;
    }
    int highest, lowest;
    int speedViol = countSpeedViolations(speed, n, &highest, &lowest);
    int maxSeverityVeh;
    int laneViol = countLaneViolations(vehicleID, lane, n, &maxSeverityVeh);
    int busy = busiestLane(laneCount);
    int least = leastBusyLane(laneCount);
    displayReport(vehicleID, speed, lane, n);
    printf("\n=========== Traffic Summary ===========\n");
    printf("Total Vehicles Processed : %d\n", n);
    printf("Overspeeding Vehicles    : %d\n", speedViol);
    printf("Highest Speed Recorded   : %d km/h\n", highest);
    printf("Lowest Speed Recorded    : %d km/h\n", lowest);
    printf("Lane Violations          : %d\n", laneViol);
    printf("Most Severe Violation By : Vehicle %d\n", maxSeverityVeh);
    printf("Busiest Lane             : Lane %d\n", busy);
    printf("Least Busy Lane          : Lane %d\n", least);
    printf("=======================================\n");
    return 0;
}
void inputData(int vehicleID[], int speed[], int lane[], int *n) 
{
    printf("Enter number of vehicles (max %d): ", MAX);
    scanf("%d", n);
    if (*n > MAX) {
        printf("Limit exceeded! Taking only %d entries.\n", MAX);
        *n = MAX;
    }
    printf("\n--- Enter Vehicle Details ---\n");
    for (int i = 0; i < *n; i++) 
    {
        printf("\nVehicle %d ID (4-digit): ", i + 1);
        scanf("%d", &vehicleID[i]);
        do {
            printf("Speed (km/h): ");
            scanf("%d", &speed[i]);
            if (speed[i] <= 0)
                printf("Invalid! Speed must be positive.\n");
        } while (speed[i] <= 0);
        do {
            printf("Lane (1-4): ");
            scanf("%d", &lane[i]);
            if (lane[i] < 1 || lane[i] > 4)
                printf("Invalid! Lane must be 1 to 4.\n");
        } while (lane[i] < 1 || lane[i] > 4);
    }
}
int countSpeedViolations(int speed[], int n, int *highest, int *lowest) 
{
    int cnt = 0;
    *highest = speed[0];
    *lowest = speed[0];

    for (int i = 0; i < n; i++) 
    {
        if (speed[i] > SPEED_LIMIT)
            cnt++;

        if (speed[i] > *highest)
            *highest = speed[i];

        if (speed[i] < *lowest)
            *lowest = speed[i];
    }
    return cnt;
}
int countLaneViolations(int vehicleID[], int lane[], int n, int *maxSeverityVeh)
{
    int cnt = 0;
    int maxSeverity = -1;
    for (int i = 0; i < n; i++)
    {
        int correctLane = vehicleID[i] % 4;
        if (correctLane == 0) correctLane = 4;
        if (correctLane != lane[i]) 
        {
            cnt++;
            int severity = abs(correctLane - lane[i]);
            if (severity > maxSeverity) {
                maxSeverity = severity;
                *maxSeverityVeh = vehicleID[i];
            }
        }
    }
    return cnt;
}
int busiestLane(int laneCount[])
{
    int max = laneCount[0], laneNo = 1;
    for (int i = 1; i < 4; i++) {
        if (laneCount[i] > max) {
            max = laneCount[i];
            laneNo = i + 1;
        }
    }
    return laneNo;
}
int leastBusyLane(int laneCount[])
{
    int min = laneCount[0], laneNo = 1;

    for (int i = 1; i < 4; i++) {
        if (laneCount[i] < min) {
            min = laneCount[i];
            laneNo = i + 1;
        }
    }
    return laneNo;
}
void displayReport(int vehicleID[], int speed[], int lane[], int n)
{
    printf("\n---------------- Vehicle Report Table ----------------\n");
    printf("VehID\tSpeed\tLane\tSpeedViol\tLaneViol\n");

    for (int i = 0; i < n; i++)
    {
        int speedViol = (speed[i] > SPEED_LIMIT) ? 1 : 0;

        int correctLane = vehicleID[i] % 4;
        if (correctLane == 0) correctLane = 4;
        int laneViol = (correctLane != lane[i]) ? 1 : 0;

        printf("%d\t%d\t%d\t   %d\t\t   %d\n",
               vehicleID[i], speed[i], lane[i], speedViol, laneViol);
    }
}
