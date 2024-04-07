# C - File I/O

# Task 0 - Read a text file and print it to the POSIX standard output

This function reads a text file and prints it to the POSIX standard output.

Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`

Here, `letters` is the number of letters it should read and print. It returns the actual number of letters it could read and print. If the file cannot be opened or read, it returns 0. If `filename` is NULL, it returns 0. If the write fails or does not write the expected amount of bytes, it returns 0.

# Task 1 - Create a file

This function creates a file.

Prototype: `int create_file(const char *filename, char *text_content);`

Here, `filename` is the name of the file to create and `text_content` is a NULL terminated string to write to the file. It returns 1 on success, -1 on failure (file cannot be created, file cannot be written, write “fails”, etc…). The created file must have these permissions: rw-------. If the file already exists, do not change the permissions. If the file already exists, truncate it. If `filename` is NULL, return -1. If `text_content` is NULL, create an empty file.

# Task 2 - Append text at the end of a file

This function appends text at the end of a file.

Prototype: `int append_text_to_file(const char *filename, char *text_content);`

Here, `filename` is the name of the file and `text_content` is the NULL terminated string to add at the end of the file. It returns 1 on success and -1 on failure. It does not create the file if it does not exist. If `filename` is NULL, return -1. If `text_content` is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file.

# Task 3 - Copy the content of a file to another file

This program copies the content of a file to another file.

Usage: `cp file_from file_to`

If the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error. If `file_to` already exists, truncate it. If `file_from` does not exist, or if you cannot read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error, where NAME_OF_THE_FILE is the first argument passed to your program. If you cannot create or if write to `file_to` fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error, where NAME_OF_THE_FILE is the second argument passed to your program. If you cannot close a file descriptor, exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error, where FD_VALUE is the value of the file descriptor. Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions. You must read 1,024 bytes at a time from the `file_from` to make less system calls. Use a buffer. You are allowed to use dprintf.

# Task 4 - Display the information contained in the ELF header at the start of an ELF file

This program displays the information contained in the ELF header at the start of an ELF file.

Usage: `elf_header elf_filename`

Displayed information: (no less, no more, do not include trailing whitespace)
Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address
Format: the same as readelf -h (version 2.26.1)
If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr. You are allowed to use lseek once. You are allowed to read a maximum of 2 times at runtime. You are allowed to have as many functions as you want in your source file. You are allowed to use printf.