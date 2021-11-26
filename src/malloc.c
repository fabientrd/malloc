#include "../includes/malloc.h"

void    *malloc(size_t size){
    printf("je rentre bien dans mon malloc\n");
    (void)size;
    return NULL;
}