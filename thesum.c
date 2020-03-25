#include <stdio.h>

int main()
{
	int num = 0;
	int f_num = 0;

	printf("Inserisca un numero: ");
	scanf("%d\n", &num);

	FILE *f = fopen("sum.dat","r");

	if(f_num != 0) {
		FILE *f = fopen("sum.dat","w");
		fprintf(f, num, "\n");
		fclose(f);
	}

	else{
		f_num = 0;
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
