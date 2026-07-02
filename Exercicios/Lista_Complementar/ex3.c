#include <stdint.h>
#include <stdio.h>

typedef int32_t i32;

typedef float   f32;

i32 main(void) {

        i32 aux = 0;
        f32 countn = 0;
        f32 countp = 0;
        f32 soma = 0;

        printf("Insira os valores:\n");
        while (1) {
                scanf("%d",&aux);
                if (aux == 0){break;}
                else if (aux > 0) {
                        countp++;
                        soma += aux;
                }
                else if (aux < 0) {
                        countn++;
                        soma += aux;
                }
        }
        i32 n_total = countn + countp;

        printf("%-18s %.2f\n", "Media:",soma/n_total);
        printf("%-18s %.0f\n","Qtde Negativos:", countn);
        printf("%-18s %.0f\n","Qtde Positivos", countp);
        printf("%-18s %.2f%%\n","Negativos:", countn/(n_total) * 100);
        printf("%-18s %.2f%%\n","Positivos:", countp/(n_total) * 100);
        printf("%-18s %d\n","Qtde Numeros:", n_total);

        return 0;
}
