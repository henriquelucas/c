#include <stdio.h>

// 5. **Questão de Classificação de Números:**

//    Escreva um programa que leia três números inteiros fornecidos pelo usuário e utilize estruturas de controle `if`, `else if` e `else` para classificar os números em ordem crescente..



int main() {

int n1, n2, n3;

printf("Digite 3 numeros para exibi-los em ordem crescente. \n");
scanf("%d %d %d", &n1, &n2, &n3 );

    if( n1<n2 && n1<n3){
        if(n2<n3){
            printf("%d %d %d", n1, n2, n3);
        }
        else{
             printf("%d %d %d", n1, n3, n2);
        }
    }

    else if(n2<n1 && n2<n3){
        if(n1<n3){
            printf("%d %d %d", n2, n1, n3);
        }
        else{
            printf("%d %d %d", n2, n3, n1);
        }
    } 
    
    else if(n3<n1 && n3<n2){
        if(n2<n1){
            printf("%d %d %d", n3, n2, n1);
        }
        else{
            printf("%d %d %d", n3, n1, n2);
        }
    }





    return 0;

}