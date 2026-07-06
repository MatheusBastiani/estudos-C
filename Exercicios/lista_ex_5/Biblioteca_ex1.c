#include <stdio.h>
#include <stdint.h>


int comprimento(char string[]) {
    int tam = 0;

    while (string[tam] != '\0') {
        tam++;
    }
    return tam;
}

void copia(char origem[], char destino[], int tam_destino) {
    size_t tam_origem = comprimento(origem);


    if (tam_origem < tam_destino) {
        for (size_t i = 0; i < tam_origem; i++) {
            destino[i] = origem[i];
        }
        destino[tam_origem] = '\0';
    }
}

int iguais(char string_1[], char string_2[]) {
    int i = 0;

    while (string_1[i] == string_2[i]) {
        if (string_1[i] == '\0') {
            return 1;
        }
        i++;
    }
    return 0;
}

void minusculo(char string[]) {
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = string[i] + 32;
        }
        i++;
    }
}

void maiusculo(char string[]) {
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - 32;
        }
        i++;
    }
}

int converter_inteiro(char string[], int *resultado) {
    int i = 0;
    int num = 0;
    int sinal;

    if (string[i] == '-') {
        sinal = -1;
        i++;
    } else { sinal = 1; }

    while (string[i] >= '0' && string[i] <= '9') {
        num = num * 10 + string[i] - 48;
        i++;
    }
    if (string[i] == '\0') {
        *resultado = num * sinal;
        return 1;
    }
    return -1;
}

void inicial_maiuscula(char string[]) {
    int i = 0;
    int inicial = 1;

    while (string[i] != '\0') {
        if (inicial && string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 32;
            inicial = 0;
        }
        if (string[i] == ' ' && string[i + 1] >= 'a' && string[i + 1] <= 'z') {
            inicial = 1;
        }
        i++;
    }
}

void concatena(char string_1[], char string_2[], int tam_1) {
    int i = 0;
    int j = 0;

    while (string_1[i] != '\0') { i++; }


    while (i < tam_1 - 1 && string_2[j] != '\0') {
        string_1[i] = string_2[j];
        i++;
        j++;
    }
    string_1[i] = '\0';
}

int procura_trecho(char string[], char alvo[]) {
    int i = 0;
    int j;

    if (alvo[0] == '\0') {
        return 0;
    }

    while (string[i] != '\0') {
        j = 0;

        while (string[i + j] == alvo[j] && string[i + j] != '\0') {
            j++;
        }

        if (alvo[j] == '\0') {
            return i;
        }
        i++;
    }
    return -1;
}

int procura_caracter(char string[], char alvo) {
    int i = 0;
    int j = 0;

    while (string[i] != '\0') {
        if (string[i] == alvo) {
            j++;
        }
        i++;
    }
    return j;
}

int main(void) {
    char nome[] = "transforma os caracteres em minúsculo";

    char alvo = 'r';
    int quantidade = procura_caracter(nome, alvo);

    if (quantidade > 1) {
        printf("%c aparece %d vezes\n", alvo, quantidade);
    } else if (quantidade == 1) {
        printf("%c aparece 1 vez.\n", alvo);
    } else { printf("%c aparece 0 vezes.\n", alvo); }


    /*
    char nome[] = "Recursos";
    char alvo[] = "re";
    int posicao = procura_trecho(nome,alvo);

    if (posicao != -1) {
        printf("'%s' foi encontrado em %s na posicao %d.\n", alvo, nome, posicao);
    } else { printf("'%s' nao foi encontrado em %s.\n", alvo, nome); }
    */

    /*
    char nome[20] = "Matheus";
    char sobrenome[] = "KunzBastiani";

    concatena(nome, sobrenome, sizeof(nome));

    printf("%s", nome);
    */

    /*
        if (converter_inteiro(num, &valor_final) == 1) {
            printf("Valor Numerico: %d\n", valor_final);
        } else { printf("Erro: Caracteres invalidos.\n"); }
    */
    return 0;
}
