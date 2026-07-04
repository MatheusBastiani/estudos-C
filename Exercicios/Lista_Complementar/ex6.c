#include <stdio.h>
#include <stdint.h>
#include <math.h>

typedef int32_t i32;

i32 main (void) {

        i32 p;
        while (1) {
                printf("\nInsira o Numero Primo a ser Checado: ");
                scanf("%d",&p);

                i32 limite = sqrt(p);
                i32 primo = 1;

                for (i32 i = 2;i <= limite;i++) {

                        if (p % i == 0) {
                                printf("%d e divisivel por %d, portanto nao e primo.\n",p,i);
                                primo =0;
                                break;
                        }
                }
                if (primo) {
                        printf("%d e primo\n",p);
                }
        }
}