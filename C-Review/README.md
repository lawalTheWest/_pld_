# C Language Review Schedule

This is a 10-day schedule for reviewing the C programming language. It covers various concepts, includes test/interview questions, and coding exercises to help deepen the understanding of C.

## Day 1: Introduction to C and Basics
- **Morning (2 hours):**
  - Concepts: Overview of the C language and its importance.
  - Test/Interview Question 1: What is the difference between `int` and `float` data types in C? Provide an example of when you would use each type.
  - Test/Interview Question 2: Explain the purpose of the `#include` directive in C. How does it relate to header files, and why is it important in C programming?
- **Afternoon (2 hours):**
  - Basics of C: data types, variables, and constants.
  - Coding Question 1: Write a program to calculate the area of a rectangle given its length and width as user input.
  - Coding Question 2: Implement a C program that converts temperature from Celsius to Fahrenheit and vice versa based on user input.

## Day 2: Functions and Variadic Functions
- **Morning (2 hours):**
  - Defining and using functions in C.
  - Test/Interview Question 1: Describe the difference between call by value and call by reference in C function parameter passing. Provide an example illustrating each.
  - Test/Interview Question 2: How do you declare and use variadic functions in C? Provide an example of a variadic function and demonstrate its usage.
- **Afternoon (2 hours):**
  - Variadic functions in C.
  - Coding Question 1: Create a C function that calculates the average of a variable number of integers.
  - Coding Question 2: Implement a C program that calculates the factorial of a non-negative integer using a recursive function.

## Day 3: Pointers and Memory Management
- **Morning (2 hours):**
  - Understanding pointers and their operations.
  - Test/Interview Question 1: Explain the concept of a null pointer in C. Why is it useful, and how should you handle it to avoid runtime errors?
  - Test/Interview Question 2: What is the difference between `malloc()` and `calloc()` in memory allocation? When would you choose one over the other, and how do you free memory allocated using these functions?
- **Afternoon (2 hours):**
  - Memory management, including dynamic memory allocation (malloc, free).
  - Coding Question 1: Write a C program that dynamically allocates memory for an array of integers, populates it, and then prints the sum of its elements.
  - Coding Question 2: Create a C program that swaps the values of two integer variables using pointers.

## Day 4: Arrays and Bit Manipulation
- **Morning (2 hours):**
  - Introduction to arrays and array manipulation.
  - Test/Interview Question 1: Write a C program to find the largest element in an integer array. Explain the algorithm you use and its time complexity.
  - Test/Interview Question 2: How would you set a specific bit in an integer to 1 without affecting other bits? Provide a code example that accomplishes this using bitwise manipulation.
- **Afternoon (2 hours):**
  - Bitwise operations and manipulation in C.
  - Coding Question 1: Implement a C program that checks if a given integer is a power of 2 using bitwise operations.
  - Coding Question 2: Create a C program that counts the number of set bits (1s) in an integer using bitwise manipulation.

## Day 5: Data Structures and Singly Linked Lists
- **Morning (2 hours):**
  - Understanding data structures in C.
  - Test/Interview Question 1: What is a data structure, and why is it important in programming? Provide an example of a real-world scenario where a data structure would be beneficial.
  - Test/Interview Question 2: Implement a function in C to reverse a singly linked list. Explain the logic behind your solution and its time complexity.
- **Afternoon (2 hours):**
  - Implementing and manipulating singly linked lists.
  - Coding Question 1: Write a C program to create and display a singly linked list.
  - Coding Question 2: Create a C function that checks if a linked list contains a cycle (i.e., is cyclic).

## Day 6: File Redirection and printf
- **Morning (2 hours):**
  - File redirection and stream redirection in C.
  - Test/Interview Question 1: How can you redirect both standard input and standard output in a C program using file redirection? Provide an example of using this technique.
  - Test/Interview Question 2: Describe the purpose and usage of format specifiers in the `printf` function. Provide an example of a complex format string.
- **Afternoon (2 hours):**
  - In-depth exploration of the `printf` function.
  - Coding Question 1: Write a C program that reads data from a file and uses `printf` to format and display it on the console.
  - Coding Question 2: Implement a C program that logs messages with different log levels using `printf`.

## Day 7: Shell and Compilation
- **Morning (2 hours):**
  - Basics of the shell and shell scripting.
  - Test/Interview Question 1: What is the purpose of a shell script in Linux, and how can you pass command-line arguments to a shell script? Provide an example shell script that accepts arguments.
  - Test/Interview Question 2: Explain the compilation process of a C program in detail. What are the essential steps, and how does the linker work in this process?
- **Afternoon (2 hours):**
  - Understanding the compilation process in C.
  - Coding Question 1: Create a shell script that accepts a filename as an argument and checks if the file exists in the current directory.
  - Coding Question 2: Write a C program that takes user input for two numbers and performs basic arithmetic operations based on user choices (addition, subtraction, multiplication, division).

## Day 8: Heap/Stack and Memory Management
- **Morning (2 hours):**
  - Understanding heap and stack memory.
  - Test/Interview Question 1: Differentiate between the heap and the stack memory in a C program. How does memory allocation and deallocation differ between these two memory regions?
  - Test/Interview Question 2: What is a memory leak in C, and how can you detect and prevent it in your code? Provide an example of a situation where a memory leak might occur.
- **Afternoon (2 hours):**
  - Memory management techniques and best practices.
  - Coding Question 1: Implement a C program that demonstrates the use of dynamic memory allocation to create a resizable array.
  - Coding Question 2: Create a C program that simulates a simple memory management system, allowing users to allocate and deallocate memory blocks.

## Day 9: Linux Basics, Permissions, and Syscalls
- **Morning (2 hours):**
  - Linux basics and navigation.
  - Test/Interview Question 1: Describe the basic file permissions in Linux (e.g., read, write, execute) and explain how to change them using the `chmod` command.
  - Test/Interview Question 2: What are system calls in Linux, and why are they essential for low-level system interactions? Provide an example of a commonly used system call and its purpose.
- **Afternoon (2 hours):**
  - File permissions and system calls in Linux.
  - Coding Question 1: Write a C program that interacts with the Linux file system using system calls to create, read, and modify files.
  - Coding Question 2: Implement a C program that demonstrates file permission changes using the `chmod` system call.

## Day 10: Comprehensive Coding Exercise and Review
- **Morning (2 hours):**
  - Comprehensive Coding Exercise:
    - Design and implement a program that simulates a simple banking system. The program should include the following features:
      - User account creation with a unique account number.
      - Deposit and withdrawal functionality for user accounts.
      - Displaying account balances and transaction history.
      - Ensuring data integrity and security, such as handling errors gracefully.
    - Utilize concepts from throughout the week, including functions, pointers, memory management, data structures, file I/O, and error handling.
  - Test/Interview Question 1: During the implementation of your banking system program, what data structure(s) would you use to store user account information efficiently? Explain your choice.
  - Test/Interview Question 2: How would you handle errors and exceptions in the banking system program to ensure that user data and transactions are safe and reliable?

- **Afternoon (2 hours):**
  - Code Review and Self-Assessment:
    - Review and test your comprehensive banking system program for correctness and efficiency.
    - Reflect on your progress throughout the week and identify areas of improvement.
    - Self-assess your understanding of the key concepts covered during the C language review.
    - Make notes of any additional topics or questions you have for further exploration.
