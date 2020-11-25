#include <stdio.h>

int main(void) {

int n1,s;

printf(" Informe o numero: ");
scanf("%d", &n1);

s = n1 % 2;

if( s == 0 ){
  printf(" numero par! \n");
}else{
  printf(" numero impar! \n");
}

printf(" Fim do programa! \n");

 return 0;
}
