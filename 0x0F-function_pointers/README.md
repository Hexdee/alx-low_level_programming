# 0x0F
Function pointers tasks

## 0. What's my name
Write a function that prints a name.
- Prototype:
```C
void print_name(char *name, void (*f)(char *));
```

### Related files
`0-print_name.c` `function_pointers.h` `0-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a && ./a
```

## 1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array.
- Prototype:
```C
void array_iterator(int *array, size_t size, void (*action)(int));
```
- where `size` is the size of the array
- and `action` is a pointer to the function you need to use

### Related files
`1-array_iterator.c` `function_pointers.h` `1-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b && ./b
```

## 2. To hell with circumstances; I create opportunities
Write a function that searches for an integer.
- Prototype:
```C
int int_index(int *array, int size, int (*cmp)(int));
```
- where `size` is the number of elements in the array `array`
- `cmp` is a pointer to the function to be used to compare values
- `int_index` returns the index of the first element for which the `cmp` function does not return 0
- If no element matches, return -1
- If `size` <= 0, return -1

### Related files
`2-int_index.c` `function_pointers.h` `2-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c && ./c
```


