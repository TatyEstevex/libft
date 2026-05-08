*This project has been created as part of the 42 curriculum by tde-alme.*

# libft

## Description

**libft** is a custom C library built from scratch as part of the 42 curriculum. The goal of this project is to re-implement a set of standard C library functions, as well as additional utility functions, in order to build a solid foundation that can be reused throughout the rest of the 42 cursus.

By coding each function manually, the project reinforces a deep understanding of memory management, pointers, data structures, and the inner workings of the C standard library.

The library is divided into three main parts:

- **Libc functions** — Re-implementations of standard C functions such as `ft_strlen`, `ft_memcpy`, `ft_atoi`, `ft_strchr`, and others.
- **Additional functions** — Utility functions not found in the standard library, such as `ft_substr`, `ft_strjoin`, `ft_itoa`, and `ft_split`.
- **Bonus — Linked list functions** — A set of functions to create and manipulate singly linked lists using the `t_list` struct.

## Library Overview

### Data Structure (Bonus)

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

### Libc Functions

| Function | Description |
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is in the ASCII table |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (handles overlap) |
| `ft_strlcpy` | Copies a string with size limit |
| `ft_strlcat` | Concatenates strings with size limit |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |
| `ft_strchr` | Locates first occurrence of a character in a string |
| `ft_strrchr` | Locates last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches memory for a character |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Locates a substring within a string |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string |

### Additional Functions

| Function | Description |
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character of a string |
| `ft_striteri` | Applies a function to each character (with index) |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a fd |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Bonus — Linked List Functions

| Function | Description |
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Deletes and frees a single node |
| `ft_lstclear` | Deletes and frees the entire list |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node |

## Instructions

### Compilation

Compile the library:
```bash
make
```

Other available rules:

`make clean`    # removes object files
`make fclean`   # removes object files and the library
`make re`       # recompiles everything from scratch

### Usage

To use libft in your own project, include the header and link the library:

#include "libft.h"

Compile with:

cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program

## Resources

### Documentation & References

- Manual pages (man)
- Peer discutions with colleages 

### AI Usage

AI (Claude by Anthropic) was used during this project for the following purposes:

- **Understanding functions** — To clarify the expected behaviour of certain functions, understand edge cases, and get explanations of specific C concepts (e.g., pointer indirection, function pointers).
- **Exploring implementation approaches** — To understand different ways of solving certain exercises and compare possible implementations before writing the final version independently.
- **Writing this README** — To structure and write the documentation for this project.

All code was written and reviewed manually. AI was used strictly as a learning and comprehension tool, not to generate final code.