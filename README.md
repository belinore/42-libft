# 42-libft

**Libft** is a custom C library developed as part of the **42 curriculum**. It reimplements essential functions from the C standard library (`stdlib.h`, `string.h`, `ctype.h`), as well as additional utilities for memory management, string manipulation and linked lists. 

## 🎯 Learning Outcomes

- Solid understanding of C language fundamentals
- Manual memory allocation/freeing and pointers
- Reimplementation of standard string and memory functions
- Introduction to linked list operations
- Writing clean, modular, and reusable code following strict standards
- Building a custom C library with static linking for reuse in future 42 projects

## 📂 Project Structure

```
42-libft/
├── ft_*.c             # Source files for reimplemented functions
├── libft.h            # Header file
├── Makefile           # Build automation
└── README.md          # Project documentation
```

## 📚 Implemented Functions

### Part 1: Standard C Library Functions

| Function        | Description                                  | Original version |
|-----------------|----------------------------------------------|------------------|
| `ft_isalpha`    | Checks for an alphabetic character           | `<ctype.h>`      |
| `ft_isdigit`    | Checks for a digit (0–9)                     | `<ctype.h>`      |
| `ft_isalnum`    | Checks for alphanumeric character            | `<ctype.h>`      |
| `ft_isascii`    | Checks if character is within ASCII range    | `<ctype.h>`      |
| `ft_isprint`    | Checks for printable character               | `<ctype.h>`      |
| `ft_strlen`     | Returns the length of a string               | `<string.h>`     |
| `ft_memset`     | Fills memory with a constant byte            | `<string.h>`     |
| `ft_bzero`      | Erases data by setting bytes to zero         | `<string.h>`     |
| `ft_memcpy`     | Copies memory area                           | `<string.h>`     |
| `ft_memmove`    | Moves memory area safely                     | `<string.h>`     |
| `ft_strlcpy`    | Copies a string with size limit              | `<bsd/string.h>` |
| `ft_strlcat`    | Concatenates strings with size limit         | `<bsd/string.h>` |
| `ft_toupper`    | Converts lowercase to uppercase              | `<ctype.h>`      |
| `ft_tolower`    | Converts uppercase to lowercase              | `<ctype.h>`      |
| `ft_strchr`     | Finds first occurrence of a char in string   | `<string.h>`     |
| `ft_strrchr`    | Finds last occurrence of a char in string    | `<string.h>`     |
| `ft_strncmp`    | Compares strings up to n characters          | `<string.h>`     |
| `ft_memchr`     | Searches memory for a character              | `<string.h>`     |
| `ft_memcmp`     | Compares memory areas                        | `<string.h>`     |
| `ft_strnstr`    | Locates a substring in a string              | `<bsd/string.h>` |
| `ft_atoi`       | Converts string to integer                   | `<stdlib.h>`     |
| `ft_calloc`     | Allocates and zeroes memory                  | `<stdlib.h>`     |
| `ft_strdup`     | Duplicates a string                          | `<string.h>`     |


### Part 2: Additional Utility Functions

| Function         | Description                                              |
|------------------|----------------------------------------------------------|
| `ft_substr`      | Extracts a substring from a string                       |
| `ft_strjoin`     | Concatenates two strings                                 |
| `ft_strtrim`     | Trims characters from beginning and end of a string      |
| `ft_split`       | Splits a string into an array of strings by delimiter    |
| `ft_itoa`        | Converts integer to string                               |
| `ft_strmapi`     | Applies a function to each char of a string (new string) |
| `ft_striteri`    | Applies a function to each char (modifies original)      |
| `ft_putchar_fd`  | Outputs a character to a file descriptor                 |
| `ft_putstr_fd`   | Outputs a string to a file descriptor                    |
| `ft_putendl_fd`  | Outputs a string followed by newline to a file descriptor|
| `ft_putnbr_fd`   | Outputs an integer to a file descriptor                  |


### Bonus: Linked List Functions

| Function          | Description                                               |
|-------------------|-----------------------------------------------------------|
| `ft_lstnew`       | Creates a new list node                                   |
| `ft_lstadd_front` | Adds a node at the beginning of a list                    |
| `ft_lstsize`      | Counts the number of nodes in a list                      |
| `ft_lstlast`      | Returns the last node of the list                         |
| `ft_lstadd_back`  | Adds a node at the end of a list                          |
| `ft_lstdelone`    | Deletes a single node using a deletion function           |
| `ft_lstclear`     | Deletes and frees an entire list                          |
| `ft_lstiter`      | Applies a function to each node’s content                 |
| `ft_lstmap`       | Creates a new list by applying a function to each node    |

## 🛠️ Compilation

To compile the library:

```bash
make            # Builds libft.a
make bonus      # Builds libft.a including linked list functions
make clean      # Removes object files
make fclean     # Removes object files and libft.a
make re         # Rebuilds everything
```

To use in another project:

```c
#include "libft.h"
```

Then compile with:

```bash
gcc your_file.c -L. -lft
```

## 📌 Notes

> ⚠️ **Norminette Compliance**  
> This project follows the [42 Norminette](https://github.com/42School/norminette) — a strict C coding style guide. It enforces rules like max 25 lines per function, separate declarations/assignments, and consistent formatting. Code is written for readability and structure over brevity.
