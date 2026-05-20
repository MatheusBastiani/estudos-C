#include <stdio.h>

int main (void) {

    float sum, diff, x, y;

    sum = diff = x = y =0;

    printf("Insira o valor da soma e da diferenca: ");
    scanf("%f%f", &sum, &diff);

    x = (diff + sum) / 2;
    y = sum - x;

    printf("x = %f\n y = %f", x, y );

    return 0;
}
