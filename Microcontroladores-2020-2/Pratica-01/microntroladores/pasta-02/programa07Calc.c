#include <stdio.h>

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
  printf(" Resultado: %.3f \n", resultado);
}

void realizarDivisao(){
  float valor1,valor2,resultado;
  printf("DIVISAO!\n");
  printf("Informe 2 operandos: ");
  scanf("%f%f",&valor1,&valor2);
  resultado = valor1 / valor2; 
  printf(" Resultado: %.3f \n", resultado);

}

void realizarSeno(){
  float catetoOp,hipotenuza,seno,angulo;
  printf("SEN!\n");
  printf("Informe o cateto oposto e a hipotenuza: ");
  scanf("%f%f",&catetoOp,&hipotenuza);
  seno =  catetoOp / hipotenuza;
  angulo = 1 / seno;
  printf(" Resultado do seno: %.3f \n", seno);
  printf(" Angulo : %.3f \n", angulo);

}

int main(void) {

  int operacao;
  int ligado = 1;

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
    printf(" coss \n ");

    case 0:
    ligado = 0;
    break;

    default:
    printf(" operacao invalida! \n");

  }
}

    return 0;

 }
