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

    // 1. Imprime o 6 manualmente, pois ele é a única exceção que não encaixa no salto de 4 em 4
    printf("1 Numero: 6\n");
    count = 1;

    // 2. Começa o loop em 8 (que é múltiplo de 4) e vai pulando de 4 em 4 (i += 4)
    for (i32 i = 8; i < 34000000; i += 4) {
        ui32 soma = 1;
        i32 limite = (i32)sqrt(i);

        // Removi o printf do i % 100000 porque printar na tela deixa o código muito lento!

        for (i32 j = 2; j <= limite; j++) {
            if (i % j == 0) {
                soma += j;
                if (j != i / j) {
                    soma += i / j;
                }
            }
        }

        if (soma == i) {
            count++;
            printf("%d Numero: %d\n", count, soma);
            if (count == n) { break; } // Movi para o lugar certo (após incrementar)
        }
    }

    clock_t fim = clock();
    double tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("\nO programa demorou %.4f segundos para finalizar.\n", tempo_gasto);

    return 0;
}
