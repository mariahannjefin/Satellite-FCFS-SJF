#include <stdio.h>

int main(void) {
    int n = 3;
    int at[3], bt[3], ct[3], tat[3], wt[3];

    for (int i = 0; i < n; i++) {
        printf("Enter Arrival Time and Burst Time for S%d: ", i + 1);
        if (scanf("%d %d", &at[i], &bt[i]) != 2 || at[i] < 0 || bt[i] <= 0) {
            printf("Invalid input. Arrival time must be >= 0 and burst time > 0.\n");
            return 1;
        }
    }

    /* FCFS assumes the input is supplied in arrival order. */
    for (int i = 0; i < n; i++) {
        int start = (i == 0 || at[i] > ct[i - 1]) ? at[i] : ct[i - 1];
        ct[i] = start + bt[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }

    printf("\nSatellite\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++)
        printf("S%d\t\t%d\t%d\t%d\t%d\t%d\n", i + 1, at[i], bt[i], ct[i], tat[i], wt[i]);

    return 0;
}
