#include <stdio.h>
#include <math.h>

int main(void){

    int x1, x2, y1, y2 = 0;

    printf("Digite as cordenadas do Ponto P (x1,y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Digite as cordenadas do Ponto P (x2,y2): ");
    scanf("%d %d", &x2, &y2);

    float dif_x = x2 - x1;
    float dif_y = y2-y1;

    float distancia = sqrt(dif_x * dif_x + dif_y * dif_y);

    printf("A distancia entre os dois pontos e: %f", distancia);

    return 0;
}