#include <stdio.h>

int main (void){

    int segundos, dias, horas, minutos;
    segundos = dias = horas = minutos = 0;

    printf("Insira uma quantidade de segundos: ");
    scanf("%d", &segundos);

    int segundo_aux = segundos;

    dias = segundos / 86400;
    segundos = segundos % 86400;
    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;
    

    printf("%d segundos correspondem a %d dias, %d horas, %d minutos e %d segundos.",segundo_aux,dias,horas,minutos,segundos);

    return 0;
}