#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor;
    float media = 0;

   
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        

        if (i == 0) {
            maior = menor = valores[i];
        } else {
            
            if (valores[i] > maior) {
                maior = valores[i];
            }
            if (valores[i] < menor) {
                menor = valores[i];
            }
        }
        
        media += valores[i];
    }

    
    media /= 5;

    
    printf("Valores lidos: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    
    printf("\nMaior valor: %d\nMenor valor: %d\nMédia: %.2f\n", maior, menor, media);

    return 0;
}
