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
i32 main(void) {

        i32 n;
        i32 numeros [100];

        printf("Insira a qtde de numeros: ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
                scanf("%d", &numeros[i]);
        }

        printf("\nx\t2x\tx*x\tx!\n\n");
        for (i32 i = 0;i < n; i++) {
                printf("%d\t%d\t%d\t%.2f\n",numeros[i], 2 * numeros[i], numeros[i] * numeros[i], calcular_fatorial(numeros[i]));
        }
        return 0;
}