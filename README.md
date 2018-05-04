# Linked List in C
An implementation of linked lists in C

### Building
To build the static library,  run the following commands from the terminal:
```bash
mkdir build && cd build && cmake .. && make ; cd ..
```
This will build ```libLinkedList.a``` in ```./bin``` directory.

### Usage
Include ```LinkedList.h``` in the source file and link to ```libLinkedList.a``` while compiling the source file.

See ```include/LinkedList.h``` for information about functionality provided by this module.
