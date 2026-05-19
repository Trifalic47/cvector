#include "utils.h"

/* Initializing the vector */
void * vector_init (int idx){
    Vector *v = malloc(sizeof(Vector));
    if (!v) {
        fprintf(stderr,"Malloc Failed on allocating space for Vector struct!");
        exit(1);
    }
    v->base = malloc(idx * IDX);
    if (!v->base) {
        free(v);
        fprintf(stderr,"malloc failed on v->base!\n");
        exit(1);
    }
    v->used = 0;
    v->capacity = idx * sizeof(int);

    return v;
}

void vector_push (Vector *v,int val) {
    if ((v->capacity - v->used ) < IDX ) {
        fprintf(stderr,"Not enough space in vector!\n");
        exit(1);
    }
    int *ptr = vector_alloc(v,IDX);
    memcpy(ptr,&val,IDX);
}

void vector_free (Vector *v) {
    free(v->base);
    free(v);
}

void * vector_alloc (Vector *v,size_t size) {
     if ((v->capacity - v->used) < size){
        fprintf(stderr,"Not enough space in vector!\n");
        exit(1);
    }
    void *ptr = v->base + v->used;
    v->used += size;
    return ptr;
}
void vector_print(Vector *v, int idx) {
    int val;
    memcpy(&val, v->base + idx * IDX, IDX);
    printf("[IDX -> %d] Val -> %d\n", idx, val);
}

void vector_expand (Vector *v,int idx) {
    v->capacity += idx * IDX;
    v->base = realloc(v->base, v->capacity);
}
