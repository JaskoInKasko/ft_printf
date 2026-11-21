# ft_printf

## What the program does

ft_printf is a C programming project that recreates the functionality of the standard `printf()` function from the C standard library.

The project implements a custom formatted output function that processes a format string, identifies conversion specifiers, retrieves the corresponding arguments, and prints formatted output to the standard output.

The project includes:

- **Formatted output:** Implements a custom `ft_printf()` function that processes format strings and variable arguments.
- **Character and string formatting:** Supports `%c` for characters and `%s` for strings.
- **Integer formatting:** Supports `%d` and `%i` for signed decimal integers and `%u` for unsigned decimal integers.
- **Hexadecimal formatting:** Supports `%x` and `%X` for lowercase and uppercase hexadecimal output.
- **Pointer formatting:** Supports `%p` for displaying memory addresses.
- **Literal percent sign:** Supports `%%` to print a percent character.
- **Variadic arguments:** Uses `va_list`, `va_start`, `va_arg`, and `va_end` to process a variable number of arguments.
- **Return value:** Returns the number of characters printed, following the behavior of the original `printf()` function.

## How to execute the project

Compile the project using the Makefile:

```bash
make
```

This generates the static library:

```bash
libftprintf.a
```

To use the library in another C project, include the header file:

```c
#include "ft_printf.h"
```

Compile your source files together with the library:

```bash
cc main.c -L. -lftprintf -I. -o program
```

Run the resulting executable:

```bash
./program
```

Example usage:

```c
ft_printf("Name: %s | Age: %d | Score: %x\n", "Alex", 25, 255);
```

Additional Makefile commands:

```bash
make clean
make fclean
make re
```

