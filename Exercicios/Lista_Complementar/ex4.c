#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

typedef int32_t i32;
typedef uint32_t ui32;

i32 main(void) {
        ui32 n = 5;
        i32 count = 0;

        clock_t inicio = clock();

        for (i32 i = 6;i < 34000000;i+=2) {
                ui32 soma = 1;
                i32 limite = (i32)sqrt(i);

                for (i32 j = 2;j <= limite;j++) {
                        if (i % j == 0) {
                                soma += j;
                                if (j != i / j) {
                                        soma += i / j;
                                }
                        }

                }
                if (soma == i) {
                        if (count == n){break;}
                        count++;
                        printf("%d Numero: %d\n", count, soma);
                }

        }
        clock_t fim = clock();
        double tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
        printf("\nO programa demorou %.4f segundos para finalizar.\n", tempo_gasto);

        return 0;
}