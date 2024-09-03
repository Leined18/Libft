# Libft Library Functions

This library contains various useful functions for memory manipulation, strings, lists, printing, and more. The functions are detailed below, grouped by categories:

| **Character Functions (is)** | **Description**                                    |
| ---------------------------- | -------------------------------------------------- |
| [ft_isalpha]                 | Checks if the character is alphabetic              |
| [ft_isalnum]                 | Checks if the character is alphanumeric            |
| [ft_isascii]                 | Checks if the character belongs to ASCII           |
| [ft_isdigit]                 | Checks if the character is a digit                 |
| [ft_isprint]                 | Checks if the character is printable               |
| [ft_isspace]                 | Checks if the character is a whitespace            |
| [ft_isndup]                  | Checks if a number array has duplicates            |
| [ft_isstrnum]                | Checks if a string is numeric                      |

| **Memory Functions (mem)**   | **Description**                                    |
| ---------------------------- | -------------------------------------------------- |
| [ft_bzero]                   | Sets a block of memory to zero                     |
| [ft_calloc]                  | Allocates memory and initializes it to zero        |
| [ft_memchr]                  | Searches for a character in a memory block         |
| [ft_memcmp]                  | Compares memory blocks                             |
| [ft_memcpy]                  | Copies a memory block                              |
| [ft_memmove]                 | Moves a memory block                               |
| [ft_memset]                  | Sets a value in a memory block                     |
| [ft_memrev]                  | Reverses a memory block                            |
| [ft_memccpy]                 | Copies up to a specific character                  |
| [ft_memdel]                  | Frees a memory block                               |
| [ft_free_2d]                 | Frees a two-dimensional array                      |

| **Conversion Functions (to)** | **Description**                                    |
| ----------------------------- | -------------------------------------------------- |
| [ft_atoi]                     | Converts a string to an integer                    |
| [ft_atobin]                   | Converts a string to binary                        |
| [ft_atol]                     | Converts a string to long                          |
| [ft_atoll]                    | Converts a string to long long                     |
| [ft_itoa]                     | Converts an integer to a string                    |
| [ft_tolower]                  | Converts a character to lowercase                  |
| [ft_toupper]                  | Converts a character to uppercase                  |
| [ft_bintoa]                   | Converts binary to a string                        |
| [ft_bintostr]                 | Converts binary to a readable string               |
| [ft_strtobin]                 | Converts a string to binary                        |

| **String Functions (str)**    | **Description**                                    |
| ----------------------------- | -------------------------------------------------- |
| [ft_split]                    | Splits a string into an array of strings           |
| [ft_strchr]                   | Searches for a character in a string               |
| [ft_strdup]                   | Duplicates a string                                |
| [ft_striteri]                 | Iterates over a string with an index               |
| [ft_strjoin]                  | Joins two strings into one                         |
| [ft_strlcat]                  | Safely concatenates strings                        |
| [ft_strlcpy]                  | Safely copies strings                              |
| [ft_strlen]                   | Calculates the length of a string                  |
| [ft_strmapi]                  | Iterates over a string and applies a function      |
| [ft_strncmp]                  | Compares two strings                               |
| [ft_strnstr]                  | Searches for a string within another string        |
| [ft_strrchr]                  | Searches for a character in a string from the end  |
| [ft_strtrim]                  | Trims whitespace from a string                     |
| [ft_strrev]                   | Reverses a string                                  |
| [ft_substr]                   | Extracts a substring                               |
| [ft_strrncmp]                 | Compares a limited number of characters            |
| [ft_strtok]                   | Splits a string into tokens                        |
| [ft_straddc]                  | Appends a character to the end of a string         |

| **List Functions (lst)**      | **Description**                                    |
| ----------------------------- | -------------------------------------------------- |
| [ft_lstnew_bonus]             | Creates a new list node                            |
| [ft_lstadd_front_bonus]       | Adds a node to the front of the list               |
| [ft_lstsize_bonus]            | Calculates the size of a list                      |
| [ft_lstlast_bonus]            | Gets the last node of the list                     |
| [ft_lstadd_back_bonus]        | Adds a node to the end of the list                 |
| [ft_lstdelone_bonus]          | Deletes a node from the list                       |
| [ft_lstclear_bonus]           | Deletes all nodes from the list                    |
| [ft_lstiter_bonus]            | Iterates over a list                               |
| [ft_lstmap_bonus]             | Applies a function to each element of the list     |

| **Output Functions (put)**    | **Description**                                    |
| ----------------------------- | -------------------------------------------------- |
| [ft_putchar_fd]               | Writes a character to a file descriptor            |
| [ft_putendl_fd]               | Writes a line to a file descriptor                 |
| [ft_putnbr_fd]                | Writes a number to a file descriptor               |
| [ft_putstr_fd]                | Writes a string to a file descriptor               |
| [ft_error]                    | Displays an error message                          |
| [ft_successful]               | Displays a success message                         |
| [ft_putstr_color_fd]          | Writes a colored string to a file descriptor       |

| **Printing Functions (printf) / Get_next_line** | **Description**                              |
| ------------------------------------------------ | -------------------------------------------- |
| [ft_printf]                                      | Prints a formatted message                   |
| [ft_putbase_fd]                                  | Prints a number in a specific base           |
| [ft_putaddr]                                     | Prints a memory address                      |
| [ft_putchar]                                     | Prints a character                           |
| [ft_puthexa]                                     | Prints a number in hexadecimal               |
| [ft_putnbr]                                      | Prints a number                              |
| [ft_putstr]                                      | Prints a string                              |
| [ft_putunsigned]                                 | Prints an unsigned number                    |
| [get_next_line]                                  | Reads a line from a file descriptor          |

| **Math Functions (math)**     | **Description**                                    |
| ----------------------------- | -------------------------------------------------- |
| [ft_abs]                      | Calculates the absolute value of a number          |
| [ft_index]                    | Finds the position of a value in an array          |
| [ft_insort]                   | Sorts an array using insertion sort                |
| [ft_sqrt]                     | Calculates the square root of a number             |
| [ft_fact]                     | Calculates the factorial of a number               |
| [ft_fib]                      | Calculates the nth number in the Fibonacci sequence |

[ft_isalpha]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isalpha.c
[ft_isalnum]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isalnum.c
[ft_isascii]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isascii.c
[ft_isdigit]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isdigit.c
[ft_isprint]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isprint.c
[ft_isspace]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isspace.c
[ft_isndup]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isndup.c
[ft_isstrnum]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isstrnum.c

[ft_bzero]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_bzero.c
[ft_calloc]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_calloc.c
[ft_memchr]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memchr.c
[ft_memcmp]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memcmp.c
[ft_memcpy]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memcpy.c
[ft_memmove]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memmove.c
[ft_memset]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memset.c
[ft_memrev]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memrev.c
[ft_memccpy]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memccpy.c
[ft_memdel]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memdel.c
[ft_free_2d]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_free_2d.c

[ft_atoi]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_atoi.c
[ft_atobin]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_atobin.c
[ft_atol]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_atol.c
[ft_atoll]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_atoll.c
[ft_itoa]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_itoa.c
[ft_tolower]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_tolower.c
[ft_toupper]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_toupper.c
[ft_bintoa]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_bintoa.c
[ft_bintostr]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_bintostr.c
[ft_strtobin]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_strtobin.c

[ft_split]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_split.c
[ft_strchr]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strchr.c
[ft_strdup]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strdup.c
[ft_striteri]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_striteri.c
[ft_strjoin]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strjoin.c
[ft_strlcat]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strlcat.c
[ft_strlcpy]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strlcpy.c
[ft_strlen]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strlen.c
[ft_strmapi]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strmapi.c
[ft_strncmp]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strncmp.c
[ft_strnstr]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strnstr.c
[ft_strrchr]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strrchr.c
[ft_strtrim]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strtrim.c
[ft_strrev]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strrev.c
[ft_substr]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_substr.c
[ft_strrncmp]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strrncmp.c
[ft_strtok]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strtok.c
[ft_straddc]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_straddc.c

[ft_lstnew_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstnew_bonus.c
[ft_lstadd_front_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstadd_front_bonus.c
[ft_lstsize_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstsize_bonus.c
[ft_lstlast_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstlast_bonus.c
[ft_lstadd_back_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstadd_back_bonus.c
[ft_lstdelone_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstdelone_bonus.c
[ft_lstclear_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstclear_bonus.c
[ft_lstiter_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstiter_bonus.c
[ft_lstmap_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstmap_bonus.c

[ft_putchar_fd]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putchar_fd.c
[ft_putendl_fd]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putendl_fd.c
[ft_putnbr_fd]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putnbr_fd.c
[ft_putstr_fd]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putstr_fd.c
[ft_error]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_error.c
[ft_successful]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_successful.c
[ft_putstr_color_fd]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putstr_color_fd.c

[ft_printf]: https://github.com/Leined18/Libft/blob/main/srcs/printf/ft_printf.c
[ft_putbase_fd]: https://github.com/Leined18/Libft/blob/main/srcs/printf/ft_putbase_fd.c
[ft_putaddr]: https://github.com/Leined18/Libft/blob/main/srcs/printf/ft_putaddr.c
[ft_putchar]: https://github.com/Leined18/Libft/blob/main/srcs/printf/ft_putchar.c
[ft_puthexa]: https://github.com/Leined18/Libft/blob/main/srcs/printf/ft_puthexa.c


[ft_fact]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_fact.c
[ft_fib]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_fib.c
[ft_abs]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_abs.c
[ft_index]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_index.c
[ft_insort]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_insort.c
[ft_sqrt]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_sqrt.c
[ft_putnbr]: https://github.com/Leined18/Libft/blob/main/srcs/printf/ft_putnbr.c
[ft_putstr]: https://github.com/Leined18/Libft/blob/main/srcs/printf/ft_putstr.c
[ft_putunsigned]: https://github.com/Leined18/Libft/blob/main/srcs/printf/ft_putunsigned.c
[get_next_line]: https://github.com/Leined18/Libft/blob/main/srcs/get_next_line/get_next_line.c
