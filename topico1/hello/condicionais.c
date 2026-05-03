#include <stdio.h>


void testeCondicional1(){

    float preco; // Declaração 
    preco = 10;  // Inicialização

    if (preco > 10){
        printf("Preco maior que 10.");

    } else if (preco < 10){
        printf("Preco menor que 10.");

    } else {
        printf("O preco so pode ser 10.");
    }

}

void testeCondicional2(){

    float valorProduto = 30;

    if (valorProduto < 10){

        printf("O produto possui um valor entre 0 e 10");

    } else if (valorProduto < 30){

        printf("O valor do produto esta entre 10 e 30");

    } else{

        printf("O valor do produto so pode ser maior que 30!");
    }

}


void operadores(){

    /*
        Operadores:
    
            Operadores são utilizados como comparadores 
            lógicos. 

            =
            <
            <=
            >
            >=
            ==
            !=
        */
}

int main(void){

    condicional();


    return 0; 
}


