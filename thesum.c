#include <stdio.h>

int main()
{
	FILE *f;	 
	int num = 0;
	int f_num = 0;
	int somma;

	f = fopen("sum.dat","r");

	if(f) {
		fscanf(f, "%d", &f_num);
		printf("Lettura dal file sum.dat in corso...\n");
		printf("Valore corrente: %d\n\n", f_num);

	}

	else{
		f_num = 0;
		fprintf(f, "%d\n", num);
	}

	fclose(f);

	printf("Inserisca il valore da sommare: ");
	scanf("%d", &num);

	somma = num + f_num;

	f = fopen("sum.dat","w");
	fprintf(f, "%d\n", somma);

	fscanf(f, "%d", &somma);

	printf("\nHo letto il valore %d\n", somma);

	printf("Salvataggio nel file sum.dat in corso...\n");

	fclose(f);

	/*Promemria:*/

/*
	IL PROGRAMMA FUNZIONA SOLO SE IL FILE "sum.dat" ESISTE GIA'
*/
	return 0;
}
