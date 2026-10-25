#include <stdio.h>

int main(void) {
    int n = 3;
    int id[3] = {1, 2, 3};
    int bt[3], ct[3], tat[3], wt[3];

    for (int i = 0; i < n; i++) {
        printf("Enter Burst Time (data transfer time) for S%d: ", id[i]);
        if (scanf("%d", &bt[i]) != 1 || bt[i] <= 0) {
            printf("Invalid input. Burst time must be greater than 0.\n");
            return 1;
        }
    }

    /* Non-preemptive SJF; all satellites are assumed ready at time 0. */
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (bt[i] > bt[j]) {
                int temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
                temp = id[i]; id[i] = id[j]; id[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        ct[i] = (i == 0) ? bt[i] : ct[i - 1] + bt[i];
        tat[i] = ct[i]; /* All arrival times are zero in this example. */
        wt[i] = tat[i] - bt[i];
    }

    printf("\nSatellite\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++)
        printf("S%d\t\t%d\t%d\t%d\t%d\n", id[i], bt[i], ct[i], tat[i], wt[i]);

    return 0;
}
