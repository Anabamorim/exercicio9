#include<stdio.h>

#define TAM_MAX 5

main(){

    /*int numeros[5] = {1, 2, 4, 100};//com inicializacao

    printf("%d", numeros[0]);
    printf("\n%d", numeros[1]);
    printf("\n%d", numeros[2]);
    printf("\n%d", numeros[3]);

      printf("\n------------------");


    //int vetorNumeros[5];//não inicializado

  //  vetorNumeros[0] = 222;

   // printf("\n%d", vetorNumeros[0]);

   // printf("Insira um valor na posicao 4");
   // scanf("%d", &vetorNumeros[4]);

   // printf("\n%d", vetorNumeros[4]);


    printf("Insira um valor na posicao 0 ");
  //  scanf("%d", &vetorNumeros[0]);
  //  printf("\n%d", vetorNumeros[0]);

      printf("\n------------------");

    int vetor[TAM_MAX];

    for(int i=0; i < TAM_MAX; i++){
        printf("\nDigite o numero");
        scanf("%d",&vetor[i]);
    }

    for (int i = 0; i < 4; i++){
        printf("\nDado na posicao %d %d", i, vetor[i]);
    }


        printf("\n------------------");*/

    char alunos[3][20] = {"Maria", "Jose", "Pedro"};

    printf("%s",alunos[0]);

    char alunos2[3][20];

    for(int i = 0; i < 3; i++){
        printf("\nDigite o nome:  ");
        fgets(alunos2[i], 20, stdin);
    }
    for(int i = 0; i < 3; i++){
        printf("\n Nomes: %s",alunos2[i]);
    }

}