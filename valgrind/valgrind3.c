// valgrind3.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p;						//creo il puntatore 
	p = (char *) malloc(20);        //gli assegno un malloc di 20

	char *s = p;					//creo il puntatore s che punta all'indirizzo del puntatore p
	for(int n = 0; n < 20; n++) {   //inserisco 0 in ogni spazio di p
		*s = '\0';
		s++;
	}								//il puntatore è arrivato alla fine 

	for(int n = 0; n < 30; n++) {
		*s = 'A';
		s++;
	}
	free(p);
}
