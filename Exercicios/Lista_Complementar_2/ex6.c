#include <stdio.h>
#include <stdint.h>

typedef int32_t i32;


void print_v(i32 v[], size_t tam) {
    for (size_t i = 0; i < tam;i ++) {
        printf("%d",v[i]);
        if (i < tam - 1) {
            printf(", ");
        }
    }
}

i32 main(void) {

    i32 k, ultimo;
    i32 v[] = {1,2,3,4,5,6,7,1,2,3,4,5,6,7};
    size_t tam = sizeof(v) / sizeof(v[0]);

    printf("Insira o valor de k: ");
    scanf("%d",&k);

    k = k % tam;

    for (i32 j = 0; j < k;j++) {

        ultimo = v[tam - 1];

        for (size_t i = tam - 1; i > 0;i--) {
            v[i] = v[i - 1];
        }
        v[0] = ultimo;
    }


    print_v(v,tam);

    return 0;
}