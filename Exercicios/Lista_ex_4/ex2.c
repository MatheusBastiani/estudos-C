#include <stdint.h>
#include <stdio.h>

typedef int32_t         i32;

int main (void) {

        i32 v [10] = {1,1,2,-2,1,-2,-1,2,2,1};
        i32 tam = 10;
        i32 counter =  0;

        for (i32 i = 0; i < tam - 1;i++) {
                if (v[i] < 0) {
                        counter++;
                }
        }
        printf(" %d ",counter);
}