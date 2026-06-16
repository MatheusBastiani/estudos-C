#include <stdio.h>
#include <stdint.h>

typedef int32_t i32;

int main(void){

        i32 v [] = {2,4,1,7,8,3,4,1};
        size_t tam = 0;
        size_t j = 0;
        i32 x = 2;

        for(size_t i = 0; i < sizeof(v) / sizeof(v[0]);i++){
                if (v[i] != x){
                        tam++;
            }
        }

        i32 aux [tam];

        for(size_t i = 0; i < sizeof(v) / sizeof(v[0]);i++){

                if (v[i] != x){
                       aux[j] = v[i];
                       j++;
                }
        }

        for (size_t i = 0; i < tam;i++){
                printf("%d ", aux[i]);
        }
        printf("tam = %zu\n", tam);

        return 0;  
}