# Libft - Custom C Library

## Overview
The **Libft** project involves creating a custom C library that mimics standard C library functions as well as additional utilities for string manipulation, memory management, linked lists, and more. This project serves as a foundational step in mastering C programming, focusing on low-level memory operations and algorithm efficiency.

## Features
Libft includes a variety of functions divided into several categories:

### 1. Standard C Library Functions
Functions that mirror those found in `<string.h>`, `<ctype.h>`, and `<stdlib.h>`, such as:
- `ft_memset`, `ft_bzero`, `ft_memcpy`
- `ft_strlcpy`, `ft_strlen`, `ft_strdup`
- `ft_atoi`, `ft_isalpha`, `ft_toupper`, etc.

### 2. Memory Management
Functions for efficient memory allocation and manipulation:
- `ft_calloc`: Allocate memory and initialize it to zero
- `ft_memmove`: Safely move overlapping memory blocks

### 3. String Manipulation
Useful string handling utilities for common operations:
- `ft_strjoin`: Concatenate two strings
- `ft_substr`: Extract a substring from a given string
- `ft_split`: Split a string by a delimiter

### 4. Linked Lists
Basic linked list management functions:
- `ft_lstnew`: Create a new linked list node
- `ft_lstadd_front`: Add a node at the beginning of the list
- `ft_lstmap`: Apply a function to each node and create a new list

### Prerequisites
- **Compiler**: The project is written in C, and it requires `gcc` or any other compatible C compiler.
- **Makefile**: A `Makefile` is included to streamline compilation.

### Installation
To compile the library, simply run the following command in the root directory:

```bash
make
