#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


typedef int32_t         i32;


int main (void) {

        i32 v [7] = {2,4,1,-7,8,-3,4};

        i32 tam =7;
        i32 x = 0;

        printf("Insira o numero inteiro a ser checado: ");
        scanf("%d", &x);

        for (i32 i = 0; i < tam - 1 ;i++ ) {
                if (v[i] == x) {
                        printf("True");
                        exit(0);
                }
        }
        printf("False.");

        return 0;
}