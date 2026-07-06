#include <stdint.h>
#include <stdio.h>

typedef int32_t i32;

i32 main(void) {
    i32 v[] = {1, 1, 1, 2, 1, 1, 1};
    size_t tam = sizeof(v) / sizeof(v[0]);
    i32 x = 0;

    printf("Insira o valor de x: ");
    scanf("%d", &x);

    for (size_t i = 0; i < tam; i++) {
        for (size_t j = i + 1; j < tam; j++) {
            if (v[i] + v[j] == x) {
                printf("Verdadeiro");
                return 0;
            }
        }
    }
    printf("Falso");

    return 0;
}
