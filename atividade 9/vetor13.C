#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor;
    int posicaoMaior, posicaoMenor;

    
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
        

        if (i == 0) {
            maior = menor = valores[i];
            posicaoMaior = posicaoMenor = i;
        } else {
           
            if (valores[i] > maior) {
                maior = valores[i];
                posicaoMaior = i;
            }
            if (valores[i] < menor) {
                menor = valores[i];
                posicaoMenor = i;
            }
        }
    }

   
    printf("Posicao do maior valor: %d\n", posicaoMaior);
    printf("Posicao do menor valor: %d\n", posicaoMenor);

    return 0;
}
