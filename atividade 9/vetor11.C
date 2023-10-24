#include <stdio.h>

int main() {
    float numeros[10];
    int quantidadeNegativos = 0;
    float somaPositivos = 0;

  
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &numeros[i]);

    
        if (numeros[i] < 0) {
            quantidadeNegativos++;
        }

       
        if (numeros[i] > 0) {
            somaPositivos += numeros[i];
        }
    }
   
    printf("Quantidade de numeros negativos: %d\n", quantidadeNegativos);

    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}
