
#include <stdio.h> //Incluindo a biblioteca de entrada e saída de dados.

int main(){
  char a[5]; //Declarando um conjunto de caracteres para ser usado.

  puts("Insira a palavra\n"); //Mensagem ao usuário, para que insira uma palavra de até cinco caracteres.

  for (size_t i = 0; i < 5; i++) //Um laço de repetição criado para que o usuário insira a palavra.
  {
    scanf(" %c", &a[i]); //A cada "passada" do laço, ele irá ler um caractere que o usuário inserir.
  }

  puts("prefixos"); //Mostrando uma mensagem que indica o que está por vir. Que são os prefixos.
    int x = 0;      //Um valor inteiro, para acessar as posições do conjunto de caracteres. Começaremos da primeira.
    printf("%c\n", a[x]); //Imprimindo a primeira posição.
    printf("%c%c\n", a[x], a[x+1]); //Imprimindo a primeira mais a segunda posição.
    printf("%c%c%c\n",a[x], a[x+1], a[x+2]); //Imprimindo a primeira, mais a segunda e a terceira.
    printf("%c%c%c%c\n",a[x],a[x+2],a[x+3]); //Imprimindo a primeira, segunda, terceira e quarta.
    printf("%c%c%c%c%c\n", a[x],a[x+2],a[x+3],a[x+4]); //Imprimindo a primeira, segunda, terceira, quarta e quinta.

  puts("sufixos");
    x = 4; //Começando da última posição
    printf("%c\n", a[x]); //Imprimindo a última posição
    printf("%c%c\n",a[x-1],a[x]); //Imprimindo a última posição e antes dela.
    printf("%c%c%c\n",a[x-2], a[x-1], a[x]); //A mesma coisa do último print mais uma posição a menos.
    printf("%c%c%c%c\n",a[x-3], a[x-2], a[x-1], a[x]); //A mesma coisa do último print mais uma posição a menos.
    printf("%c%c%c%c%c\n", a[x-4], a[x-3], a[x-2], a[x-1], a[x]); //A mesma coisa do último print mais uma posição a menos.

    puts("Subpalavras");

    x = 0;
    //Imprimindo os prefixos
    printf("%c\n", a[x]);
    printf("%c%c\n", a[x], a[x+1]);
    printf("%c%c%c\n",a[x], a[x+1], a[x+2]);
    printf("%c%c%c%c\n",a[x],a[x+2],a[x+3]);
    printf("%c%c%c%c%c\n", a[x],a[x+2],a[x+3],a[x+4]);

    x=4;
    //Imprimindo parte dos sufixos, menos o que seria a primeira posição.
    printf("%c\n", a[x]);
    printf("%c%c\n",a[x-1],a[x]);
    printf("%c%c%c\n",a[x-2], a[x-1], a[x]);
    printf("%c%c%c%c\n",a[x-3], a[x-2], a[x-1], a[x]);
    //Imprimindo as posições do meio.
    x = 2;

                  printf("%c\n", a[x+2]);
          printf("%c\n", a[x+1], a[x+2], a[x+3]);
    printf("%c\n", a[x], a[x+1], a[x+2], a[x+3], a[x+4]);





}
