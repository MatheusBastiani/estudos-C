#include <stdint.h>
#include <stdio.h>

typedef int32_t i32;

i32 termina_0 () {

        i32 num =       0;
        i32 num_aux =   0;

        printf("Insira os numeros a serem checados (Insira 0 para parar): ");

        while (1) {

                scanf("%d", &num);

                if ( num == 0) { return num_aux;
                }
                else if ( num % 10 == 0) { num_aux++;
                }
                else {
                }
        }
}

int main (void) {

        printf("%d numeros terminam em zero.",termina_0());
        return 0;

}