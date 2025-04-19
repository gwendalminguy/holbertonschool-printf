# 🚀 Creation of a Custom `printf` Function

Welcome to our custom `printf` function project! 🎉

In this project, our goal was to create our own version of the popular `printf` function, commonly used in C for formatted output. We worked as a team to develop a simplified version of `printf`, handling different format specifiers and output formatting features.

## 📋 Project Overview

This custom `printf` implementation allows users to print formatted data to the standard output. It can handle the basic conversion specifiers such as `%c`, `%s`, `%i` and `%d`, as well as more advanced ones like `%b`, `%o`, `%x`, `%p`, and a few others.

The key challenge was to replicate the behavior of the standard `printf` function without directly using it.

## 🛠 Features

This custom `printf` function supports the following features:

- Displaying integers (`int`).
- Displaying characters (`char`).
- Displaying strings (`char *`).
- Displaying addresses (`void *`).
- Handling variadic arguments using `va_list` and `va_arg`.
- Handling specific notations such as binary, octal and hexadecimal.
- Manipulating strings to be reversed or encypted with ROT13.

## 🔧 Technologies Used

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-343741?style=for-the-badge&logo=gnu&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)
![Vim](https://img.shields.io/badge/Vim-019733?style=for-the-badge&logo=vim&logoColor=white)
![Linux Badge](https://img.shields.io/badge/Linux-333333?style=for-the-badge&logo=linux&logoColor=white)

## 📂 Project Structure

The project contains several files, which are the following:

| Files | Description  |
| :-------- | :------- |
| [`main.h`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/main.h) | The header file containing functions prototypes. |
| [`_putchar.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/_putchar.c) | The file containing auxiliary function `_putchar` to display a character. |
| [`_printf.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/_printf.c) | The file where our custom `_printf` function is implemented.  |
| [`get_function.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/get_function.c) | Function to get the right function according to a given character. |
| [`print_char.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_char.c) | Function to `print` any given character. |
| [`print_string.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_string.c) | Function to `print` any given string. |
| [`print_int.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_int.c) | Function to `print` any given integer in decimal. |
| [`print_unsigned.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_unsigned.c) | Function to `print` any given unsigned integer. |
| [`print_binary.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_binary.c) | Function to `print` any given integer in binary. |
| [`print_octal.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_octal.c) | Function to `print` any given integer in octal. |
| [`print_hexadecimal_lower.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_hexadecimal_lower.c) | Function to `print` any given integer in lowercase hexadecimal. |
| [`print_hexadecimal_upper.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_hexadecimal_upper.c) | Function to `print` any given integer in uppercase hexadecimal. |
| [`print_string_ascii.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_string_ascii.c) | Function to `print` any given string excluding special ASCII characters. |
| [`print_address.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_address.c) | Function to `print` the address any given variable. |
| [`print_string_rev.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_string_rev.c) | Function to `print` any given string in reverse. |
| [`print_rot13.c`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/print_rot13.c) | Function to `print` any given string with ROT13 encryption. |
| [`man_3_printf`](https://github.com/gwendalminguy/holbertonschool-printf/blob/main/man_3_printf) | Manual page of our function `_printf`. |

## ⚙️  Compilation and Restrictions

**The code should be compiled this way:**

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

💡 What does it do?

This command is used to strictly compile all C files in our project.
It helps ensure the code is:

✅ Clean and free from common bugs

✅ Following C89 coding standards

✅ Compiled with any warning treated as an error

**The restrictions are as follows**:

- No more than **5 functions** per file
- No use of global variables
- Authorized functions and macros:

	- `write`
	- `malloc`
	- `free`
	- `va_start`
	- `va_end`
	- `va_copy`
	- `va_arg`

## 🧩 Use in Code

Let's take a look at what our `_printf` function actually does when implemented in your code with a `char`, a `string` and an `int` conversion specifiers (`%c`, `%s` & `%i`):

```
#include "main.h"

int main(void)
{
	char *language = 'C';
    char *names = "Sofian & Gwendal";
    int year = 2025;

    	_printf("This %c project was brought to you by %s in early %i!\n", language, names, year);
    
	return (0);
}
```

**Now let's take a look at the output:**

`$ This C project was brought to you by Sofian & Gwendal in early 2025!`

## 💾 Use of Memory

The code does not contain any dynamic allocation of the memory.
However, to ensure the code is free of any memory-related issue, a tool such as `Valgrind` can be used on the executable file, after compilation:

```
root@b6579b5f94d3:/home/ubuntu/holbertonschool-printf# valgrind ./a.out 
==27531== Memcheck, a memory error detector
==27531== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==27531== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==27531== Command: ./a.out
==27531== 
This project was brought to you by Sofian & Gwendal!
The name Hugo starts with a H and is 4 letters long.
==27531== 
==27531== HEAP SUMMARY:
==27531==     in use at exit: 0 bytes in 0 blocks
==27531==   total heap usage: 0 allocs, 0 frees, 0 bytes allocated
==27531== 
==27531== All heap blocks were freed -- no leaks are possible
==27531== 
==27531== For lists of detected and suppressed errors, rerun with: -s
==27531== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

## 🧑‍🤝‍🧑 Authors

This project was carried out by: 

- [Gwendal Minguy-Pèlerin](https://github.com/gwendalminguy)
- [Sofian Messaoui](https://github.com/smessaoui31)
