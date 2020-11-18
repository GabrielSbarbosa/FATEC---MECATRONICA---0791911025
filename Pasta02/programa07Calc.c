#include <stdio.h>
#include <math.h>


void realizarSoma(){
  float valor1,valor2,resultado; 
  printf("SOMA!\n");
  printf("Informe 2 operandos: ");
  scanf("%f%f",&valor1,&valor2);
  resultado = valor1 + valor2; 
  printf(" Resultado: %.3f \n", resultado);
}

void realizarSubtracao(){
  float valor1,valor2,resultado; 
  printf("SUBTRACAO!\n");
  printf("Informe 2 operandos: ");
  scanf("%f%f",&valor1,&valor2);
  resultado = valor1 - valor2; 
  printf(" Resultado: %.3f \n", resultado);
}

void realizarMultiplicacao(){
  float valor1,valor2,resultado; 
  printf("MULTIPLICACAO!\n");
  printf("Informe 2 operandos: ");
  scanf("%f%f",&valor1,&valor2);
  resultado = valor1 * valor2; 
  printf(" Resultado: %.1f \n", resultado);
}

void realizarDivisao(){
  float valor1,valor2,resultado;
  printf("DIVISAO!\n");
  printf("Informe 2 operandos: ");
  scanf("%f%f",&valor1,&valor2);

  if( valor2 != 0){
    resultado = valor1 / valor2; 
    printf(" Resultado: %.3f \n", resultado);
  } else {
    printf(" ERRO: não pode dividir por 0. \n");
  }
}

void realizarSeno(){
  float angulo,seno;
  float PI = (3.141592654);
  printf("SEN!\n");
  printf("Informe um angulo: ");
  scanf("%f",&angulo);
  seno =  sin (angulo*PI/180);
  printf(" Resultado do seno: %.3f \n", seno);
}

void realizarCoss(){
  float angulo,coss;
  float PI = (3.141592654);
  printf("COSS!\n");
  printf("Informe um angulo: ");
  scanf("%f",&angulo);
  coss =  cos (angulo*PI/180);
  printf(" Resultado do cosseno: %.3f \n", coss);
}

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
