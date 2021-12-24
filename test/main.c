#include "../includes/malloc.h"


int		main(void){
	char *addr;

	printf("je suis bien dans mon test\n");
	addr = (char*)malloc(10);
	printf("je sors de mon malloc ou je ne suis pas rentré dedans\n");
	return (0);
}
