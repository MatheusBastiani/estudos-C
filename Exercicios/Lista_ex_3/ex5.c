#include <stdio.h>
#include <stdint.h>

typedef int32_t         i32;

typedef struct {

        i32 x;
        i32 y;

}vec2i;

void multiplos(i32 n1, i32 n2, i32 x) {

        for (n1; n1 <= n2; n1++) {
                if (x % n1 == 0) {
                        printf(" %d ", n1);
                }
        }
}

int main (void) {

        vec2i v ={};
        i32 x = 0;

        printf("Insira o valor de x:");
        scanf("%d", &x);

        printf("\n Agora insira o intervalo: ");
        scanf("%d%d", &v.x, &v.y);

        multiplos(v.x, v.y, x);

        return 0;
}