#ifndef MALLOC_H
# define MALLOC_H

# include "libft.h"
# include <unistd.h> // getpagesize() 
# include <sys/mman.h> // mmap() & munmap() void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset); int munmap(void *addr, size_t length);
# include <sys/resource.h> // getrlimit() setrlimit()
# include <sys/time.h> // getrlimit() setrlimit()
# include <stdlib.h>

typedef struct      s_heap{
    struct s_heap   *prev;
    struct s_heap   *next;
    t_heap_group    group;
    size_t          total_size;
    size_t          free_size;
    size_t          block_count;
}                   t_heap;

typedef struct      s_block{
    struct 
}                   t_block;

void free(void *ptr); // libère la mémoire du pointeur. Si ptr vaut NULL free ne fait rien.
void *malloc(size_t size); // allour size octets et retourne un pointeur sur la memoire allouée
void *realloc(void *ptr, size_t size); // prend le pointeur passé en paramètre et lui realloue de la memoire en gardant les valeurs deja presente
// En cas d'erreur malloc et realloc retournent un pointeur NULL
// Preallocation de zone mémoire pour stocker petit et moyens mallocs pour limiter les appels a mmap et munmap 

#endif