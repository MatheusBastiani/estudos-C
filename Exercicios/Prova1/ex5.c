#include <stdint.h>
#include <stdio.h>

typedef int32_t i32;
typedef float   f32;

i32 main(void) {

        i32 a,b,c = 0;

        printf("\nInsira os valores de a, b e c: ");
        scanf("%d%d%d", &a, &b,&c);

        if ( a < b + c && b < a + c && c < a + b) {
                if (a == b && a == c) {
                        printf("Triangulo Equilatero");
                }
                else if (a == b && a != c) {
                        printf("Triangulo Isoscele");
                }
                else {
                        printf("Triangulo Escaleno");
                }
        }
        else {
                printf("Nao e Triangulo");
        }
        return 0;
}