#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

typedef int32_t     i32;

bool haveN(i32 n1, i32 n2) {

        bool flag = 0;

        for (i32 i = 0; i < 10; i++) {

                if (n1 % 10 == n2) {
                        flag = true;
                        break;
                }
                n1 /= 10;
        }
        return flag;
}

int main (void) {

        i32 n1 = 0;
        i32 n2 =0;

        printf("\nInsira um numero inteiro positivo: ");
        scanf("%d", &n1);
        printf("\nInsira o algarismo a ser checado: ");
        scanf("%d",&n2);

        if (haveN(n1,n2)) {
                printf("Verdadeiro.");
        }
        else{printf("Falso.");}

        return 0;
}