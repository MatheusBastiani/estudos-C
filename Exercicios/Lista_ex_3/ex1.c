#include <stdint.h>
#include <stdio.h>

typedef int32_t i32;


void imprimePar( i32 inicio, i32 fim) {

        for (inicio; inicio > fim; inicio--) {

                if (inicio % 2 == 0) {
                        printf("  %d  ", inicio);
                }
        }
}

int main (void) {

        i32 inicio, fim;

        printf("Insira o intervalo decrescente a ser checado: ");
        scanf("%d%d", &inicio, &fim);

        imprimePar(inicio, fim);

        return 0;
}

