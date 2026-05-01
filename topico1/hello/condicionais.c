#include <stdio.h>


int main(void){

    float valorProduto = 30;

    if (valorProduto < 10){

        printf("O produto possui um valor entre 0 e 10");

    } else if (valorProduto < 30){

        printf("O valor do produto esta entre 10 e 30");

    } else{

        printf("O valor do produto so pode ser maior que 30!");
    }


    return 0; 
}

