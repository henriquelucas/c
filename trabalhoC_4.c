#include <stdio.h>

// 4. **Questão de Contagem Regressiva:**

//    Crie um programa que utilize um loop `for` para fazer uma contagem regressiva de um número fornecido pelo usuário até zero. O programa deve exibir uma mensagem "Fogo!" quando atingir zero.


int main()
{  

 int i;
            
printf("digite um numero positivo para exibor sua contagem regressiva: \n");
scanf("%d",&i);

    // if(i<0)
    // {
    //   printf("digite um numero maior que 0 \n");
    //   scanf("%d",&i);
    // }

    // else
    // {

      for(;i>=0;i--)
      {

        if (i>0) {
                printf("%d\n",i);
            }
        else{
                printf("%d Fogo!\n",i);
             }
      }
    // }
            return 0;

}