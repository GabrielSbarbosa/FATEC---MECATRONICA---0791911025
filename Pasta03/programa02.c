#include <stdio.h>
#include "biblioteca.h"


int main(void) {

  int operacao;
  int ligado = 1;

printf(" Selecione a opçao de calculo: \n Soma(1) \n Subtracao(2) \n Multiplicacao(3) \n Divisao(4) \n Seno(5) \n Cosseno(6) \n Sair(0) \n ");

  while(ligado == 1){

  printf("Informe a operacao desejada: ");
  scanf("%i", &operacao);

  switch(operacao){

    case 1:
    realizarSoma(); break;

    case 2:
    realizarSubtracao(); break;

    case 3:
    realizarMultiplicacao(); break;

    case 4:
    realizarDivisao(); break;

    case 5:
    realizarSeno(); break;

    case 6:
    realizarCoss(); break;

    case 0:
    ligado = 0; break;

    default:
    printf(" Operacao invalida! \n");

  }
}

    return 0;

 }
