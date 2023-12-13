#include <stdio.h>

int main(void) {

float numero_real;
int numero_inteiro;
char letra;

printf("Informe um numero real: ");
scanf("%f", &numero_real);
printf("Informe um numero inteiro: ");
scanf("%i", &numero_inteiro);
printf("Informe uma letra: ");
scanf(" %c", &letra);

printf("Valor Real: %f \n", numero_real);
printf("Valor inteiro: %d \n", numero_inteiro);
printf("Letra: %c \n", letra);

 return 0;
}
