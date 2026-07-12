# Libft

## Overview

**Libft** is the first project of the 42 School curriculum. The goal of this project is to create a personal C library by reimplementing commonly used functions from the standard C library and developing additional utility functions.

This project helps build a strong foundation in C programming by improving understanding of memory management, string manipulation, data structures, and modular code organization.

## Features

This library includes implementations of:

* Character checking and conversion functions
* String manipulation functions
* Memory management functions
* Conversion functions
* File descriptor output functions
* Linked list manipulation functions (bonus)

## Implemented Functions

### Character Functions

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_toupper`
* `ft_tolower`

### String Functions

* `ft_strlen`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strnstr`
* `ft_strdup`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_strmapi`
* `ft_striteri`

### Memory Functions

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

### Conversion Functions

* `ft_atoi`
* `ft_itoa`

### File Descriptor Functions

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

### Linked List Functions (Bonus)

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

## Compilation

To compile the library:

```bash
make
```

This creates the static library:

```text
libft.a
```

To remove object files:

```bash
make clean
```

To remove all generated files:

```bash
make fclean
```

To rebuild the library:

```bash
make re
```

To compile bonus functions:

```bash
make bonus
```

## Usage

Include the header file in your C project:

```c
#include "libft.h"
```

Then compile your program with the library:

```bash
cc main.c libft.a
```

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello from Libft!\n", 1);
    return (0);
}
```

## Project Structure

```
libft/
├── Makefile
├── libft.h
├── *.c
└── README.md
```

## What I Learned

Through this project, I improved my understanding of:

* C programming fundamentals
* Memory allocation and manipulation
* Pointers and addresses
* String handling
* Static libraries
* Data structures
* Writing clean and reusable code

## Author

Mahdi Shamas
