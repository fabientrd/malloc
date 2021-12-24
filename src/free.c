#include "../includes/malloc.h"

void    free(void *ptr){
    (void)ptr;
    printf("je rentre bien dans mon free\n");
    return ;
}