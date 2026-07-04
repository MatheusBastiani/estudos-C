#include <stdio.h>
#include <stdint.h>

typedef int32_t         i32;
typedef uint32_t        u32;
typedef uint8_t         u8;

i32 main(void) {

        u8 vetor[32] = {};

        i32 N;

        printf("Insira o Valor de N: ");
        scanf("%d",&N);

        for (i32 i = 31;i > 0; i--) {
                if (N % 2) {
                        vetor[i] = 1;
                }
                N /= 2;
        }

        for (i32 i =0;i < 32;i++) {
                printf("%d",vetor[i]);
        }
        return 0;
}

