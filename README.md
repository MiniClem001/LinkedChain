# Linked Lists Library

This is a C library to manage linked lists. The library provides functions to initialize, insert, delete, and display elements in a linked list.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)
- [Example](#example)
- [License](#license)

## Features

- Initialize a linked list.
- Insert elements at the beginning of the list.
- Insert elements at a specific position in the list.
- Delete the first element of the list.
- Display the elements of the list.

## Installation

To use this library, you need to include the `linked_lists.h` header file in your project and link the `linked_lists.c` source file.

1. Clone the repository:

   ```sh
   git clone https://github.com/yourusername/linked-list-library.git
   ```

2. Include the header file in your project:

   ```c
   #include "linked_lists.h"
   ```

3. Use the Makefile to compile the library and the example:

   ```sh
   make
   ```

   This will generate the static library `liblinked_lists.a` and the `example` file.

## Usage

To use the library, follow these steps:

1. Initialize the linked list.
2. Insert elements into the list.
3. Display the list.
4. Delete elements from the list.
5. Insert elements at a specific position.

## Functions

### `List *linked_lists_init(void)`

Initializes and returns a new linked list.

### `int linked_lists_insert(List *list, int newNumber)`

Inserts a new element with the value `newNumber` at the beginning of the list.

### `int linked_lists_insert_after(List *list, int newNumber, int position)`

Inserts a new element with the value `newNumber` after the specified position in the list.

### `void linked_lists_delete(List *list)`

Deletes the first element of the list.

### `void linked_lists_display(List *list)`

Displays the elements of the list.

## Example

Here is an example of using the library:

```c
#include <stdio.h>
#include <stdlib.h>
#include "linked_lists.h"

int main(void)
{
    List *list = linked_lists_init(void);

    // Insert elements into the list
    printf("Adding elements 10, 15, 22, 55 and 2 to the list\n");
    linked_lists_insert(list, 10);
    linked_lists_insert(list, 15);
    linked_lists_insert(list, 22);
    linked_lists_insert(list, 55);
    linked_lists_insert(list, 2);
    linked_lists_display(list);

    // Delete the first element
    printf("Deleting the first element of the list\n");
    linked_lists_delete(list);
    linked_lists_display(list);

    // Insert an element at a specific position
    printf("Inserting the element 30 in 3rd position from the end\n");
    linked_lists_insert_after(list, 30, 3);
    linked_lists_display(list);

    return 0;
}
```

## License

This project is licensed under the GPL-3.0 License. See the [LICENSE](LICENSE.txt) file for details.
