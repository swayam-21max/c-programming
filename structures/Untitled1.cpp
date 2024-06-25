#include <stdio.h>

#define MAX_PROCESSES 10

typedef struct {
    int arrival_time;
    int burst_time;
    int remaining_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
} Process;

void roundRobin(int arrival_time[], int burst_time[], int num_processes, int time_quantum) {
    Process processes[MAX_PROCESSES];
    int total_burst_time = 0;
    int remaining_processes = num_processes;

    // Initialize processes
    for (int i = 0; i < num_processes; i++) {
        processes[i].arrival_time = arrival_time[i];
        processes[i].burst_time = burst_time[i];
        processes[i].remaining_time = burst_time[i];
        total_burst_time += burst_time[i];
    }

    // Execute processes
    int current_time = 0;
    while (total_burst_time > 0) {
        for (int i = 0; i < num_processes; i++) {
            if (processes[i].arrival_time <= current_time && processes[i].remaining_time > 0) {
                int execute_time = (processes[i].remaining_time < time_quantum) ? processes[i].remaining_time : time_quantum;
                processes[i].remaining_time -= execute_time;
                total_burst_time -= execute_time;
                current_time += execute_time;
                processes[i].completion_time = current_time;
                printf("Process %d executed for %d units\n", i + 1, execute_time);
            }
        }
    }

    // Calculate turnaround time and waiting time
    for (int i = 0; i < num_processes; i++) {
        processes[i].turnaround_time = processes[i].completion_time - arrival_time[i];
        processes[i].waiting_time = processes[i].turnaround_time - burst_time[i];
    }

    // Print results
    printf("\nResults:\n");
    printf("Process\tTurnaround Time\tCompletion Time\tWaiting Time\n");
    for (int i = 0; i < num_processes; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", i + 1, processes[i].turnaround_time, processes[i].completion_time, processes[i].waiting_time);
    }
}

int main() {
    int num_processes, time_quantum;
    int arrival_time[MAX_PROCESSES], burst_time[MAX_PROCESSES];

    printf("Enter the number of processes: ");
    scanf("%d", &num_processes);

    printf("Enter the time quantum: ");
    scanf("%d", &time_quantum);

    printf("Enter arrival time and burst time for each process:\n");
    for (int i = 0; i < num_processes; i++) {
        printf("Arrival time for process %d: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("Burst time for process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
    }

    roundRobin(arrival_time, burst_time, num_processes, time_quantum);

    return 0;
}

