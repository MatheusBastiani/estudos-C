#include <stdint.h>
#include <stdio.h>

typedef int32_t         i32;

typedef struct {
        i32 x;
        i32 y;
}vec2i;

void sequence(i32 num1, i32 num2) {

        if (num1 > num2) {
                for (num1; num1 >= num2; num1--) {
                        printf(" %d ", num1);
                }
        } else {
                for (num1; num1 <= num2; num1++) {
                        printf(" %d ", num1);
                }
        }
}

int main (void) {

        vec2i v = {
        };

        printf("Insira os Dois Numeros Inteiros: ");
        scanf("%d%d", &v.x, &v.y);

        sequence(v.x,v.y);
        return 0;
}