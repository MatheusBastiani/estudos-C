#include <stdio.h>
#include <stdint.h>

typedef int32_t i32;
typedef float   f32;

i32 main(void) {

        i32 a, b, buffer = 0;
        i32 aux = 0;
        f32 soma = 0;

        printf("Insira o valor de a:");
        scanf("%d",&a);
        printf("\nInsira o valor de b:");
        scanf("%d",&b);

        if (a == b) {
                printf("\na deve ser diferente de b.\n");
                printf("Fechando Programa");
                return 1;
        }
        if ( a < 0 || b < 0) {
                printf("\na e b devem ser positivos.\n");
                printf("Fechando Programa");
                return 1;
        }

        while (1) {
                scanf("%d",&buffer);
                if (buffer < 0) {break;}
                else if (buffer >= a && buffer <= b || buffer <= a && buffer >= b ) {
                        printf("Numero adicionado.\n");
                        soma += buffer;
                        aux++;
                }
        }
        printf("Media = %f", soma / aux);
        return 0;
}
