# Double Linked List Implementation in C++

## Overview

This C++ project implements a double linked list data structure—a collection of nodes connected by pointers. Each node contains a data field and two pointers: `prev` and `next`. The list is bidirectional, allowing traversal in both directions.

## Features

### Node Creation

- **`create_node(int data)`:** Creates a new node with the given data and returns a pointer to it.

### Insertion

- **`insert_head(node* &head, node* &tail, int data)`:** Inserts a new node with the given data at the beginning of the list.
- **`insert_tail(node* &head, node* &tail, int data)`:** Inserts a new node with the given data at the end of the list.
- **`insert_after(node* &head, node* &tail, int data, int key)`:** Inserts a new node with the given data after the first node that contains the key. If the key is not found, does nothing.
- **`insert_before(node* &head, node* &tail, int data, int key)`:** Inserts a new node with the given data before the first node that contains the key. If the key is not found, does nothing.

### Deletion

- **`delete_head(node* &head, node* &tail)`:** Deletes the first node in the list and returns its data. If the list is empty, returns -1.
- **`delete_tail(node* &head, node* &tail)`:** Deletes the last node in the list and returns its data. If the list is empty, returns -1.

## Usage

To use this project, include the header file `double_linked_list.h` in your main program. Create a double linked list object and use its methods as demonstrated in the example below.

```cpp
#include <iostream>
#include "double_linked_list.h"

using namespace std;

int main() {
  // ... (Your example code here)
  return 0;
}
