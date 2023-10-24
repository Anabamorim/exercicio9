#include<stdio.h>

#define TAM_MAX 5

main(){

    int vetor[3]= {1,2,3};

    int soma = 0;

    //soma = vetor[0] + vetor[1] + vetor[2];

   
    for(int i = 0; i < 3; i++){
        soma += vetor[i];
    }

     printf("%d", soma);


}