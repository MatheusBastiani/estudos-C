#include <stdio.h>
#include <math.h>

int main(void){

    const float pi = 3.1415;
    int altura = 12;
    int diametro = 6;
    float raio = diametro / 2;

    float volume = pi * altura * raio * raio; 

    printf("Volume: %f", volume);

    return 0;
}