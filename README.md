# # Project: Creating Our Own `printf` Function

Welcome to our custom `printf` function project! 🎉

In this project, our goal was to create our own version of the popular `printf` function, commonly used in C for formatted output. We worked as a team to develop a simplified version of `printf`, handling different format specifiers and output formatting features.

## 🚀 Project Overview

The custom `printf` implementation allows users to print formatted data to the standard output. It can handle various specifiers like `%d`, `%s`, `%c`, `%i` and more.

The key challenge was to replicate the behavior of the standard `printf` function without directly using it.

## 🛠 Features

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
|`man_3_printf`| Manual page of our function `printf`|

## Compilation and Restrictions

Our code will be compiled this way:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

💡 What does it do?

This command is used to strictly compile all C files in our project.
It helps ensure our code is:

✅ Clean

✅ Follows C coding standards

✅ Free from common bugs

**The restrictions are as follows**:

- No more than **5** functions per file
- Not allowed to use global variables
- Some authorized functions and macros
	
	- `write`
	- `malloc`
	- `free`
	- `va_start`
	- `va_end`
	- `va_copy`
	- `va_arg`

## 🧩 Use in Code

**Let's take a look at what our** `_printf` **function actually does when implemented in your code with 
a **`string` **variable** (`s`).

```
int main(void)
{
    	_printf("Gwendal is a %s.\n",monster);
    
	return(0);
}
```

**iNow let's take a look at the output**

`$ Gwendal is a monster.`


