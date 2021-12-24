
#include "../includes/malloc.h"

void *realloc(void *ptr, size_t size){
    (void)ptr;
    (void)size;
    printf("je rentre bien dans mon realloc\n");
    return NULL;
}