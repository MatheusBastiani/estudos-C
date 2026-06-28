#include <stdint.h>
#include <stdio.h>

typedef float           f32;
typedef int32_t         i32;

i32 main (void) {

        f32 notas [] = {10, 1, 1, 1, 1, 1, 0, 2, 1, 0};
        size_t tam = sizeof(notas) / sizeof(notas[0]);
        i32 counter = 0;
        f32 media = 0;

        for (size_t i = 0;i < tam;i++) {
                media += notas[i];
        }
        media /= tam;

        for (size_t i = 0;i < tam;i++) {
                if (notas[i] >= media) {
                        counter++;
                }
        }
        printf("%d", counter);
        return 0;
}