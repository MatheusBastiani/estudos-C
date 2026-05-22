#include <stdint.h>
#include <stdio.h>

typedef int32_t         i32;


i32 fatorial(i32 N) {

        i32 fatorial = 1;

        for (i32 i = 1; i <= N; i++ ) {
                fatorial = fatorial * i;
        }

        return fatorial;
}

int main (void) {

        i32 N = 0;

        printf("Insira o numero inteiro a calcular o fatorial: ");
        scanf("%d", &N);
        if (N >= 1) {
                printf("%d",fatorial(N));
        }
        else{return 0;}


}