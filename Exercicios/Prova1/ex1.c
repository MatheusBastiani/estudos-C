#include <stdio.h>
#include <stdint.h>
#include <math.h>

typedef int32_t i32;

int main(void) {

        i32 x = 0;
        i32 aux_2 = 0;
        i32 aux = 1;
        i32 j = 0;
        i32 soma = 0;

        printf("Insira un numero inteiro: ");
        scanf("%d", &x);

        aux = x;
        aux_2 = x;

        while (1) {

                if (aux != 0) {
                        aux = aux / 10;
                        j++;
                }else{
                        break;
                }
        }
        while (1) {

                if (x != 0) {
                        soma += pow(x % 10, j);
                        x = x / 10;

                }else{
                        break;
                }
        }
        if (aux_2 == soma) {
                printf("Verdadeiro.");
        }
        else {
                printf("Falso.");
        }
        return 0;
}