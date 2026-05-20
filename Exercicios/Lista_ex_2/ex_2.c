#include <stdio.h>

int main(void) {

    float a,b,c,media;
    a = b = c = media = 0;

    printf("Insira tres numeros reais: ");
    scanf("%f%f%f",&a,&b,&c);

    media = (a+b+c) / 3;

    printf("A media aritmetica e igual a = %f", media);

    return 0;
}