#include <stdio.h>
#define TAM 15 

int main() {
    float notas[TAM], soma = 0, media;

    for (int i = 0; i < TAM; i++) {
        printf("Inserir a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    
    media = soma / TAM;

    
    printf("A media geral das notas e: %.2f\n", media);

    return 0;
}
