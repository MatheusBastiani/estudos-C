#include <stdio.h>
#include <math.h>

int main(void) {

        int a, b, c, x1, x2, delta;
        a = b = c = delta = x1 = x2 = 0;

        printf(" Quais os valores de a, b e c: ");
        scanf("%d%d%d", &a, &b, &c);

        delta = b * b - 4 * a * c;

        printf("Delta: %d", delta);

        x1 = (-1 * b + sqrt(delta)) / (2 * a);
        x2 = (-1 * b - sqrt(delta)) / (2 * a);

        printf("\nx1 = %d\nx2 = %d", x1, x2);
}