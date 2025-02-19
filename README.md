# Dangling Pointers in C

This repository demonstrates a common error in C programming: the use of dangling pointers. Dangling pointers occur when a pointer is left pointing to memory that has been freed or is no longer valid. Accessing the memory location via a dangling pointer leads to undefined behavior, often resulting in program crashes or unpredictable results.

The `dangling_ptr.c` file contains a program illustrating the problem, while `dangling_ptr_solution.c` provides a corrected version.

## Understanding the Problem

The core issue in `dangling_ptr.c` is that a pointer is created, but its referenced memory is invalidated before the pointer itself is nullified or properly managed. 

## How to Resolve

The solution in `dangling_ptr_solution.c` addresses the problem by properly managing memory deallocation or avoiding such scenarios.

## Key Takeaways

- Carefully manage memory allocation and deallocation.
- Always set pointers to NULL after they are no longer needed.
- Use smart pointers (in C++) to automate memory management.
- Understanding memory management is crucial for creating robust and reliable C programs. 