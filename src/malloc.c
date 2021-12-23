#include "../includes/malloc.h"

void    *malloc(size_t size){
    printf("je rentre bien dans mon malloc\nLa size est de %ld\n", size);
    return NULL;
}