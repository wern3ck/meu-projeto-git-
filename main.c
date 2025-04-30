#include <stdio.h>
#include <stdlib.h>



    int tempominutos(int minutos, int horas, int segundos){
        int tempominutos;
        tempominutos = (segundos) / 60;
        int tempohoras;
        tempohoras = 60 / (horas);
        return tempominutos, tempohoras;

}

int main(){

    int segundos = 1800;

    int minutos  = (segundos) / 60;

    int horas = tempohoras;

    printf("\nImprima os valor: minutos: %2.d, horas: %2.d", minutos, horas);

    return 0;
    }

