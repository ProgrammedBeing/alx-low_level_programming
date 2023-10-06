# alx-low_level_programming - 0x0B-malloc_free

This repository contains C programs that demonstrate the use of dynamic memory allocation and deallocation using `malloc` and `free` functions.

## Tasks

| Task | Description |
| ---- | ----------- |
| [0. Float like a butterfly, sting like a bee](./0-create_array.c) | Write a function that creates an array of chars, initializes it with a specific char. |
| [1. The woman who has no imagination has no wings](./1-strdup.c) | Write a function that returns a pointer to a newly allocated space in memory, containing a copy of a given string. |
| [2. He who is not courageous enough to take risks will accomplish nothing in life](./2-str_concat.c) | Write a function that concatenates two strings and returns a new string. |
| [3. If you even dream of beating me, you'd better wake up and apologize](./3-alloc_grid.c) | Write a function that returns a pointer to a 2-dimensional array of integers. |
| [4. It's not bragging if you can back it up](./4-free_grid.c) | Write a function that frees a 2-dimensional grid previously created by the `alloc_grid` function. |

## Usage

Each task is provided with its respective source code file. You can compile and run the programs to test them. For example:

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o task_0
./task_0

Make sure to replace 0 with the task number you want to compile and test.
