#include <stdio.h>

int main()
{
	int esterno = 0;
	int interno = 0;

	printf("Inserisca un numero: ");
	scanf("%d\n", interno);

	FILE *f = fopen("sum.dat","r");

	if(esterno != 0) {
		printf("Il file non esiste!");
		FILE *f = fopen("sum.dat","w");
	}

	else{
		esterno = 0;
	}

	
	/*Promemria devo chiudere il file.*/

/*	printf("Inserisca un intero: ");
	scanf("%d", &u_numero);

	FILE *f = ("sun.dat", "r");

	fscanf(f, "%d", &s_numero);

	somma = u_numero + s_numero;

	printf("La somma è: "%d", somma);

	fclose(f);
*/
	return 0;
}
