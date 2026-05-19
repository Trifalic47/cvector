
# cvector

A learning-oriented dynamic vector and linear allocator written in C.

## Features

* Dynamic heap-based integer storage
* Manual memory management
* Linear allocation strategy
* Dynamic expansion using realloc()
* Raw byte-level memory handling
* Simple vector push system

## Memory Model

The vector internally stores:

* `base` → start address of allocated heap memory
* `used` → currently occupied bytes
* `capacity` → total allocated bytes

Memory layout:

```text
[used used used free free free]
```

Allocations move linearly forward using an offset.

## Project Structure

```text
.
├── main.c
├── utils.c
├── utils.h
```

## Build

Compile using gcc:

```bash
make # to compile and run normally
make fall # to compile and run but with more safety using sanitizers
```

## Example

```c
Vector *ages = vector_init(3);

vector_push(ages, 10);
vector_push(ages, 14);
vector_push(ages, 18);
```

## Current Limitations

* Integer-only support
* No automatic resize on push
* No pop/remove operations
* No alignment handling
* No bounds checking

## Future Goals

* Generic type support
* Automatic resizing
* Arena allocator implementation
* Free-list allocator
* Memory debugging utilities

## Learning Goals

This project was built to understand:

* malloc()
* realloc()
* pointer arithmetic
* heap memory layout
* allocator design
* byte-level memory operations
---

# Made by - Trifalic47
