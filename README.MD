*This project has been created as part of the 42 curriculum by fsayuri-*

# get_next_line

## Description
The goal of the **get_next_line** project is to write a function that returns a line read from a file descriptor, ending with a newline character (`\n`) whenever one is found. 

This project introduces the concept of **static variables** in C programming and teaches efficient memory management, as the function must read files in chunks using a buffer size (`BUFFER_SIZE`) defined at compilation time. 

The **Bonus** implementation extends this capability by allowing the function to manage **multiple file descriptors concurrently** (e.g., reading from `fd 3`, switching to `fd 4`, and returning to `fd 3` without losing the reading thread or leaking memory).

---


## 🛠️ Instructions

### Compilation
The project does not require a Makefile for evaluation but must compile flawlessly with the `-D BUFFER_SIZE=n` flag.

To compile use:
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl
```

To compile using bonus:
```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c main.c -o gnl_bonus
```

### Execution Example

Inside a dummy main.c:
```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd1 = open("file1.txt", O_RDONLY);
    char *line;

    line = get_next_line(fd1);
    printf("Fd 1: %s", line);
    free(line);

    close(fd1);
    return (0);
}
```

## Resources
Documentation & References
- [Input/Output System Calls in C (read, open, close)](https://www.geeksforgeeks.org/c/input-output-system-calls-c-create-open-close-read-write/)
- [Understanding Static Variables in C](https://www.geeksforgeeks.org/c/static-variables-in-c/)

## AI Usage Disclosure
Artificial Intelligence was utilized as an interactive code reviewer and debugging companion throughout this project.