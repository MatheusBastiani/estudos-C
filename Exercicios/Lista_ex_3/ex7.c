#include <stdint.h>
#include <stdio.h>

typedef int32_t        i32;
typedef float          f32;

void euler(i32 N) {

        f32 euler = 2;
        f32 aux = 2;

        for (i32 i = 3; i <= N;i++) {
                euler += 1 / aux;
                aux *= i;
        }
        printf("\nE = %.5f", euler);
}

int main(void) {

        i32 N =0;

        printf("Insira o valor de N: ");
        scanf("%d",&N);

        euler(N);

        return 0;
}