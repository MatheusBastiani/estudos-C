#include <stdint.h>
#include <stdio.h>

typedef int32_t i32;
typedef float   f32;

int main (void) {

        i32 v [8] = {2,4,1,7,8,3,4,1};
        f32 tam = 8;
        f32 buffer = 0;

        for (i32 i = 0; i <= tam - 1;i++) {
                buffer += v[i];
        }
        printf(" %f ", buffer / tam);

        return 0;
}