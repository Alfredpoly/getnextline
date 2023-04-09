# get_next_line

The goal of the project is to create a function that reads a file descriptor line by line, returning each line individually when called.

# How it Works

The get_next_line function reads a file descriptor (FD) line by line until the end of the file is reached or an error occurs. It returns the line read, without the newline character at the end, or NULL if there is nothing more to read or an error occurred.
The function takes one parameters: the file descriptor to read.
The function returns the line that has been read.

# How to Use

To use get_next_line, you need to include the get_next_line.h header file in your C code. Then, you can call the get_next_line function as follows:

```
static char     *get_next_line(int fd);
```

The fd parameter is the file descriptor to read from.

Here's an example of how you could use get_next_line to read lines from a file:

```
int main(void)
{
    int fd;

    fd = open("example.txt", O_RDONLY);
    while (get_next_line(fd))
    {
        printf("%s\n", get_next_line(fd));
    }
    close(fd);
    return (0);
}
```

# Project Requirements

In addition to implementing the get_next_line function, the project has a few requirements that must be met:

* The function should be able to handle multiple file descriptors simultaneously.
* The function must be able to handle text files with lines that end with '\n', as well as files that do not end with a newline character.
* The function must not leak memory.
* The function must be written in accordance with the 42 coding style guide.

# What I learned

Get_next_line is an important assignment that help me understand how to read and manipulate file descriptors. It also teached me a lot about memory allocations and error handling.
