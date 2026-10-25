# CPU Scheduling Using FCFS and SJF

## Aim
To implement First Come First Serve (FCFS) and Shortest Job First (SJF) scheduling algorithms in C and calculate the Completion Time, Turnaround Time, and Waiting Time.

## Real-World Use Case
This project models **satellite data transmission**. A satellite may have multiple data packets waiting to be transmitted to a ground station through a single communication channel. CPU scheduling algorithms can be used as a model to decide which packet should be transmitted first.

## Algorithms Implemented

### 1. First Come First Serve (FCFS)
- Executes tasks in the order they arrive.
- Uses Arrival Time (AT) and Burst Time (BT).
- Simple to implement, but longer tasks can make shorter tasks wait.

### 2. Shortest Job First (SJF)
- Executes the available task with the shortest burst time first.
- Can reduce average waiting time.
- Long tasks may experience starvation if shorter tasks keep arriving.

## Scheduling Calculations

- **Completion Time (CT):** Time at which a task finishes.
- **Turnaround Time (TAT):** `CT - AT`
- **Waiting Time (WT):** `TAT - BT`

## Technologies Used
- Programming Language: C
- Concepts: Operating Systems, CPU Scheduling, FCFS, SJF, Process Scheduling

## Files in This Repository

- `fcfs.c` — FCFS scheduling implementation.
- `sjf.c` — SJF scheduling implementation.
- `fcfs_output.png` — FCFS output screenshot.
- `sjf_output.png` — SJF output screenshot.

## How to Compile and Run

### FCFS Scheduling
```bash
gcc fcfs.c -o fcfs
./fcfs
```

### SJF Scheduling
```bash
gcc sjf.c -o sjf
./sjf
```

On Windows, run `fcfs.exe` or `sjf.exe` after compiling.

## Expected Outcome
The programs calculate and display the scheduling details for each satellite data transfer, including Completion Time, Turnaround Time, and Waiting Time.

## Conclusion
FCFS and SJF scheduling algorithms were implemented to demonstrate how tasks can be scheduled for satellite data transmission. FCFS processes tasks in arrival order, while SJF prioritizes shorter tasks to reduce waiting time. These algorithms illustrate the trade-offs involved in scheduling tasks efficiently.
