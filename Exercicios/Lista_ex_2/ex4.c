#include <stdint.h>
#include <stdio.h>

typedef float f32;

f32 calcP3(f32 p1, f32 p2) {

        f32 media = 5;
        f32 p3 = 0;

        p3 = (4 * media - p1 - p2 ) / 2;

        return p3;
}

int main (void) {

        f32 p1,p2;
        p1 = p2 = 0;

        printf("Insira os valores das 2 provas: ");
        scanf("%f%f", &p1, &p2);

        printf("\nVoce precisa tirar: %.1f na p3\n", calcP3(p1,p2));

        return 0;
}