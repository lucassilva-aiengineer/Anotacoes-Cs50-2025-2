#include <stdio.h>
#include <stdbool.h>


void tipoDados(){

    int numero; 
    numero = 10; 

    printf("Inteiro: %d", numero); 

    float numeroFloat = 10.5; 

    printf("O número: %f", numeroFloat); 


    double numeroDouble = 10.500005; 
    printf("Double: %lf", numeroDouble); 


    bool vendas = true; 
    bool dividas = false; 

    printf("Tivemos vendas: %d", vendas);



    /* Específicadores de formato 

        %c carcter
        %f 
        %d inteiro 
        %li long int 
        %s String  
    */
}

int main(){

    tipoDados();

    return 0; 
}