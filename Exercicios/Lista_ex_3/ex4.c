#include  <stdio.h>
#include <stdint.h>

typedef int32_t         i32;

void todosDiv(i32 num) {

        for (i32 i = 1; i <= num; i++) {
                if (num % i == 0) {
                        printf(" %d ", i);
                }

    }
}

int main (void) {

        i32 num = 0;

        printf("Insira o numero a se achar os divisores: ");
        scanf("%d",&num);

        todosDiv(num);

    return 0;
}