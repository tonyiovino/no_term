#include <stdio.h>

int main()
{
	FILE *f;	 
	int num = 0;
	int f_num = 0;

	
	f = fopen("sum.dat","r");
	fscanf(f, "%d", &f_num);

	printf("Lettura dal file sum.dat in corso...\n");
	printf("Valore corrente: %d\n\n", f_num);


	if(f) {
		FILE *f = fopen("sum.dat","r");
		fscanf(f, "%d", &f_num);
	}

	else{
		f_num = 0;
		fprintf(f, "%d\n", num);
	}

	fclose(f);

	printf("Inserisca il valore da sommare: ");
	scanf("%d", &num);

	f_num = num + f_num;

	f = fopen("sum.dat","w");
	fprintf(f, "%d\n", f_num);

	fscanf(f, "%d", &f_num);

	printf("\nHo letto il valore %d\n", f_num);

	printf("Salvataggio nel file sum.dat in corso...\n");

	fclose(f);

	/*Promemria:*/

/*
	IL PROGRAMMA FUNZIONA SOLO SE IL FILE "sum.dat" ESISTE GIA'
*/
	return 0;
}
