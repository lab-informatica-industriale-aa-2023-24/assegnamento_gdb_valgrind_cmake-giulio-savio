// valgrind1.c
// In questo file ci sono due problemi

#include <stdlib.h>

void f(void)
{
	int* x = malloc(10 * sizeof(int));
	x[9] = 0;                         //il primo errore trovato sta nella dimensione del puntatore, da 10 passo a 9
	free(x);
}

int main(void)
{
	f();
	return 0;
}
