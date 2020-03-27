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
		fprintf(stdout, "Lettura dal file sum.dat in corso...\n");
		printf("Valore corrente: %d\n\n", f_num);

		printf("Inserisca il valore da sommare: ");

		fclose(f);
	}

	else{
		fprintf(stderr, "Il file sum.dat non esiste.\nCreare un nuovo valore: ");
	}

	scanf("%d", &num);

	somma = num + f_num;

	f = fopen("sum.dat","w");

	fprintf(f, "%d\n", somma);

	printf("\nHo letto il valore %d\n", somma);

	fprintf(stdout, "Salvataggio nel file sum.dat in corso...\n");

	fclose(f);

	return 0;
}
