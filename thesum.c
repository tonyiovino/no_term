#include <studio.h>

int main()
{
    int u_numero, c_numero, somma; 

    printf("Inserisca un intero: ");
    scanf("%d", &u_numero);

    FILE *f = ("sun.dat", "r");

    fscanf(f, "%d", &s_numero);

    somma = u_numero + s_numero;

    printf("La somma è: "%d", somma);

    fclose(f);

    return 0;
}
