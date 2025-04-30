#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int matricula;
    int dia, hora;
    char* dias_semanas[] = {"2ª-feira", "3ª-feira", "4ª-feira", "5ª-feira", "6ª-feira"};
    printf("Digite o numero da matricula (1 a 30): ");
    scanf("%d",&matricula);

    if (matricula < 1 || matricula > 30) {
        printf("Matricula invalida.\n");


    return 1;
}

dia = (matricula - 1)/7;
hora = 8 + (matricula - 1)%7;

printf("%s as %02d:00 horas.\n", dias_semanas[dia],hora);

return 0;
}
