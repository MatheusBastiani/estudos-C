#include <stdio.h>

int main (void) {


    int a,b;
    a = b = 0;

    printf("Insira 2 numeros inteiros: ");
    scanf("%d%d", &a, &b);

    printf("\n%d + %d = %d\n",a, b, a + b );
    printf("%d - %d = %d\n",a, b, a - b );
    printf("%d * %d = %d\n",a, b, a * b );
    printf("%d / %d = %d\n",a, b, a / b );
    printf("%d %% %d = %d\n",a, b, a % b );

    return 0;
}