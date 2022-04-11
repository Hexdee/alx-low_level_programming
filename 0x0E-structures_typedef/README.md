# 0x0E
Structures and typedef tasks

## 0. Poppy
Define a new type struct dog with the following elements:

- name, type = char *
- age, type = float
- owner, type = char *

### Related files
`dog.h` `0-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a && ./a
```
## 1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initialize a variable of type struct dog

### Related files
`1-init_dog.c` `1-main.c` `dog.h`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b && ./b
```

## 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a struct dog

- You are allowed to use the standard library
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing.

### Related files
`2-print_dog.c` `dog.h` `2-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c && ./c
```

## 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Define a new type `dog_t` as a new name for the type struct dog.

### Related files
`dog.h` `3-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d && ./d
```


## 4. A door is what a dog is perpetually on the wrong side of
Write a function that creates a new dog.

- You have to store a copy of name and owner
- Return NULL if the function fails

### Related files
`4-new_dog.c` `dog.h` `4-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e && ./e
```

## 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function that frees dogs.

### Related files
` 5-free_dog.c` `dog.h` `5-main.c`

### Run this command
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f && valgrind ./f
```
