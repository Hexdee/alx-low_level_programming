# 0x010
Solution to stdarg.h and variadic function tasks

## 0. Beauty is variable, ugliness is constant
Write a function that returns the sum of all its parameters

- Prototype:
```C
int sum_them_all(const unsigned int n, ...);
```
- If `n == 0`, return `0`

### Related files
`0-sum_them_all.c` `variadic_functions.h` `0-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a && ./a
```

## 1. To be is to be the value of a variable
Write a function that prints numbers, followed by a new line.

Prototype: 
```C
void print_numbers(const char *separator, const unsigned int n, ...);
```
- where separator is the string to be printed between numbers
- and `n` is the number of integers passed to the function
- You are allowed to use `printf`
- If separator is `NULL`, dont print it
- Print a new line at the end of your function

### Related files
`1-print_numbers.c` `variadic_functions.h` `1-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b && ./b
```

## 2. One woman's constant is another woman's variable
Write a function that prints strings, followed by a new line.

Prototype: 
```C
void print_strings(const char *separator, const unsigned int n, ...);
```
- where separator is the string to be printed between the strings
- and `n` is the number of strings passed to the function
- You are allowed to use `printf`
- If separator is `NULL`, dont print it
- If one of the string is `NULL`, print `(nil)` instead
- Print a new line at the end of your function

### Related files
`2-print_strings.c` `variadic_functions.h` `2-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c && ./c
```
