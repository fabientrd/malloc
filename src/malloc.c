#include "../includes/malloc.h"

void    *malloc(size_t size){
    (void)size;
    printf("je rentre bien dans mon malloc\n");
    return NULL;
}