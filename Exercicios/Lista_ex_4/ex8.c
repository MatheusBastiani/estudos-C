#include <stdint.h>
#include <stdio.h>

typedef int32_t i32;


int main(void) {
    i32 v[] = {2, 4, 1, 7, 8, 3, 4, 1};
    size_t tam = sizeof(v) / sizeof(v[0]);
    size_t j = 0;

    i32 x = 2;

    for (size_t i = 0; i < tam; i++) {
        if (v[i] != x) {
            v[j++] = v[i];
        }
    }

    for (size_t i = 0; i < j; i++) {
        if (i != j - 1) {
            printf("%d ", v[i]);
        } else {
            printf("%d,", v[i]);
        }
    }

    printf(" tam = %zu\n", j);

    return 0;
}
