# 0x0c. C - More malloc, free

## Description
This project focuses on advanced dynamic memory allocation in C. It covers the use of `malloc`, `free`, `exit`, and the standard library functions `calloc` and `realloc`. The goal is to understand how to manage memory on the heap effectively while ensuring program stability.

## Learning Objectives
* How to use the `exit` function to terminate a program.
* How to use `calloc` and `realloc` from the standard library.
* Why and how to check the return value of memory allocation functions.
* Adhering to the **Betty** coding style and standard C guidelines.

## Requirements
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (using flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** All files must comply with the [Betty style](https://github.com/holbertonschool/Betty).

## Tasks

| File | Prototype | Description |
| --- | --- | --- |
| `0-malloc_checked.c` | `void *malloc_checked(unsigned int b);` | Allocates memory using `malloc`. Exits with status 98 on failure. |
| `1-string_nconcat.c` | `char *string_nconcat(char *s1, char *s2, unsigned int n);` | Concatenates two strings up to `n` bytes of the second string. |
| `2-calloc.c` | `void *_calloc(unsigned int nmemb, unsigned int size);` | Allocates memory for an array using `malloc` and initializes it to zero. |
| `3-array_range.c` | `int *array_range(int min, int max);` | Creates an array of integers containing a range of values from `min` to `max`. |

## Author
* Your Name/GitHub Username
