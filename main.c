#include <stdio.h>

int main() {

    //Variavel

    int a = 20;

    //Imprimindo o valor de uma variável
    printf("Valor de a: %d \n", a);

    //Imprimindo o endereço de uma variável
    printf("Valor de a: %d \n", &a);

    //Variaveis armazenam valores
    int b = 10;

    //Ponteiros  armazenam posições da memoria
    int *ponteiro;

    //Ponteiro recebendo posição na memoria da variavel B
    ponteiro = &b;

    //Imprimindo o valor de uma variável
    printf("Valor de a: %d \n", b);

    //* Pode ser lido como "Conteudo apontado por"
    *ponteiro = 40;

    //Imprimindo o valor de uma variável
    printf("Valor de a: %d \n", b);


    return 0;

}