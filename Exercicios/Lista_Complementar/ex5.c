#include <stdio.h>
#include <stdint.h>

typedef int32_t i32;
typedef double  f64;

f64 calcular_fatorial(i32 n) {

        f64 fat = 1;
        for (i32 i = 1;i <= n;i++) {
                fat *= i;
        }
        return fat;
}

i32 main (void) {

        f64 tolerancia, termo_atual, proximo_termo, diferenca;
        f64 euler = 1;
        i32 k = 1;


        printf("Insira a Tolerancia: ");
        scanf("%lf",&tolerancia);

        while (1) {

                termo_atual     = 1/calcular_fatorial(k);
                proximo_termo   = 1/calcular_fatorial(k+1);
                diferenca = termo_atual - proximo_termo;

                printf("\nTermo gerado: %lf", termo_atual);

                euler += termo_atual;

                if (diferenca < tolerancia) {break;}

                k++;
        }

        printf("Valor Final do numero de euler: %lf",euler);

        return 0;
}