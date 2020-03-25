#include <stdio.h>

int main()
{
	FILE *f;	
	int num = 0;
	int f_num = 0;

	
	f = fopen("sum.dat","r");

	if(f != 0) {
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
