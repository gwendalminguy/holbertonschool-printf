# # Project: Creating Our Own `printf` Function

Welcome to our custom `printf` function project! 🎉

In this project, our goal was to create our own version of the popular `printf` function, commonly used in C for formatted output. We worked as a team to develop a simplified version of `printf`, handling different format specifiers and output formatting features.

## 🚀 Project Overview

The custom `printf` implementation allows users to print formatted data to the standard output. It can handle various specifiers like `%d`, `%s`, `%c`, `%i` and more.

The key challenge was to replicate the behavior of the standard `printf` function without directly using it.

## 🛠 Features

## Features
Our custom `printf` function supports the following features:
- Displaying integers (`int`).
- Displaying characters (`char`).
- Displaying strings (`string`).
- Handling variadic arguments using `va_list` and `va_arg`.


## Project Structure
The project contains several files, with the following key ones:

| Files | Description  |
| :-------- | :------- |
| `main.h` | The header file declaring the `_printf` function. |
| `get_function.c` | Files to gets the right function according to a given character.|
| `_printf.c` |The file where our custom `printf` function is implemented.  |
| `print_char.c` | Function to `print` any given character. |
| `print_string.c` | Function that `print` a string to  the standard output. |
|`print_int.c`| Function to `print` any given integer in decimal|
 `_putchar.c`| Contains auxiliary function `_putchar` to display a character|
