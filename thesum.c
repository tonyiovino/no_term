#include <stdio.h>

int main()
{
	FILE *f;	 
	int num = 0;
	int f_num = 0;

	
	f = fopen("sum.dat","r");

	if(f) {
		FILE *f = fopen("sum.dat","r");
		fscanf(f, "%d", &f_num);
	}

	else{
		f_num = 0;
		fprintf(f, "%d\n", num);
	}

	fclose(f);

	printf("Inserisca un numero: ");
	scanf("%d", &num);

	f_num = num + f_num;

	f = fopen("sum.dat","w");
	fprintf(f, "%d\n", f_num);

	fclose(f);

	/*Promemria:*/

/*
	IL PROGRAMMA FUNZIONA SOLO SE IL FILE "sum.dat" ESISTE GIA'
*/
	return 0;
}
