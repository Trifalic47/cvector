/*
* Dynamic memory allocator using C
* Owner - Trifalic47. [There are other contributors too]
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    uint8_t *base;
    size_t used;
    size_t capacity;
} Vector;

typedef enum {
    integer = sizeof(int),
    character = sizeof(char),
} type;

#define IDX sizeof(int)

void * vector_init (int idx);
void vector_push (Vector *v,int val);
void vector_free (Vector *v);
void * vector_alloc (Vector *v,size_t size);
void vector_print (Vector *v, int idx);
void vector_expand (Vector *v,int idx);
