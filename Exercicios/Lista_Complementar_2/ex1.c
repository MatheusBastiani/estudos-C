#include <stdio.h>
#include <stdint.h>

typedef int32_t i32;

i32 main(void) {

        i32 vetor [] = {2, 5, 7, 9, 10};
        size_t tam = sizeof(vetor) / sizeof(vetor[0]);

        i32 x;

        printf("Insira o numero alvo: ");
        scanf("%d",&x);

        if (vetor[0] <= x) {
                printf("0");
        }

        for (size_t i = 1; i < tam - 1;i++) {

                if (x == vetor[i]) {
                        printf("%llu",i);
                        return 0;
                }
                else if (x > vetor[i] && x < vetor[i + 1]) {
                        printf("%llu",i + 1);
                }
        }
        return 0;
}