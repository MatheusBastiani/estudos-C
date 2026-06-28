#include <stdint.h>
#include <stdio.h>

typedef int32_t i32;


int main(void) {

        i32 v1 [] = {11,5,7,8};
        i32 v2 [] = {11,5,7,8};

        size_t tam = sizeof(v1) / sizeof(v1[0]);

        for (size_t i = 0;i < tam;i++) {
                for (size_t j = 0;j < tam;j++) {
                        if (v1[i] == v2[j]) {
                                printf("%d ", v1[i]);
                        }
                }
        }
        return 0;
}