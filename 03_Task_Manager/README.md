# Task Manager Simulation

## Project Overview
This project is a **Task Manager Simulation** implemented in C++. It provides functionality to manage tasks using a **stack-based** and **queue-based** system. The project allows users to add, remove, execute, and list tasks, with additional features such as sorting and simulating process execution based on priority.

## Features
- **Process Management**
  - Create and store processes
  - Remove processes from the task manager
  - Execute processes
  - Display all tasks
- **Task Manager Implementations**
  - **Stack-based Task Manager** (LIFO: Last In, First Out)
  - **Queue-based Task Manager** (FIFO: First In, First Out)
- **Bonus Features**
  - Sort tasks by priority
  - Simulate process execution based on priority

## How to Build and Run
### Prerequisites
- C++ compiler (GCC or Clang)
- CMake
- Make

### Build Instructions
1. Navigate to the project directory:
   ```sh
   cd Task_Manager_Simulation/03_Task_Manager
   ```
2. Create and move to the `build` directory:
   ```sh
   mkdir build && cd build
   ```
3. Run CMake to generate the build files:
   ```sh
   cmake ..
   ```
4. Compile the project:
   ```sh
   make
   ```
5. Run the executable:
   ```sh
   ./TaskManager
   ```

## Usage
Upon running the program, the user will see a menu with the following options:
- **1: Add Process** – Adds a new process with an ID, name, and priority.
- **2: View Next Process** – Displays the next process in the stack/queue.
- **3: Execute Process** – Removes and executes the next process.
- **4: List All Processes** – Displays all stored processes.
- **5: Exit** – Closes the program.

## Future Enhancements
- Implement GUI for better visualization.
- Add logging mechanism for executed processes.
