#include <stdio.h>


// Bibliotecas em c e funções que elas possuem. 


void obterString(){

    // string answer = get_string("Whats your name: ");

    char string[10];
    
    printf("Indique o seu nome: "); 
    scanf("%s", &string); 

    printf("O seu nome: %s", string); 

}
int main(void){

    // printf("Hello, world! \n");


    // Scape Sequence. 

    // \n New line 
    // \r 
    // \'
    // \\ 


    // Utilizando a função 
    // e imprimindo a string

    // utilizandoCS50();

    obterString();


    return 0; 
} 