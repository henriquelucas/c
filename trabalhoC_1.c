#include <stdio.h>


// 1. **Questão de Contagem de Números Pares:**
   
//    Escreva um programa que utilize um loop `for` para contar e exibir todos os números pares em um intervalo de números fornecido pelo usuário...


int main() {
    int num_1, num_2;

   
    printf("Digite um numero");
    scanf("%d", &num_1);

    printf("Digite outro numero");
    scanf("%d", &num_2);

  
    for (int i = num_1; i <= num_2; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
return 0;
}