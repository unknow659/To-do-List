# CLI To-Do List in C++

A lightweight, robust, console-based To-Do List application written in modern C++.

---

## Features

- **Add Tasks**: Enter descriptions for new tasks.
- **View Tasks**: Display all tasks with their completion status (`[ ] Pending` vs `[X] Completed`).
- **Complete Tasks**: Mark specific tasks as completed by their ID.
- **Delete Tasks**: Remove tasks from the list by their ID.
- **Safe Input Handling**: 
  - Prevents infinite loops when non-numeric values are entered.
  - Safely flushes input buffers to prevent skipping inputs when mixing `cin >>` and `getline()`.
- **Clean Architecture**: Uses a dedicated `Task` struct rather than desynchronized parallel vectors.

---

## Project Structure

```text
todo-cli/
├── main.cpp     # Main application source code
└── README.md    # Documentation and usage guide
