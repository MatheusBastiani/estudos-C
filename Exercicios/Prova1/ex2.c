#include <stdint.h>
#include <stdio.h>

typedef int32_t i32;

int main(void) {
        i32 v [] = {-1,-2,-3,-4,5,6,7,8,9,1};
        size_t tam = sizeof(v) / sizeof(v[0]);

        for (size_t i = 0; i < tam;i++ ) {
                for (size_t j = i + 1; j < tam;j++) {
                        if (v[i] == v[j]) {
                                printf("Verdadeiro");
                                return 0;
                        }
                }
        }

        printf("Falso");
        return 0;
}