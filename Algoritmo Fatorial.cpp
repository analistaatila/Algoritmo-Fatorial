#include <stdio.h>

int main(void) 
{
  int res=1; // armazena o resultado do fatorial
  int fat;// armazena valor cujo fatorial ser� calculado
  printf("Digite um valor para calcular o fatorial:");
  scanf("%d",&fat);// obt�m valor cujo fatorial ser� calculado 

  // estrutura de repeti��o que calcula o fatorial
  for(int i=1;i<=fat;i++){
    res = res*i; // realiza multiplica��es sucessivas a partir de 1 at� fat
  }
  // imprime o resultado
  printf("O fatorial de %d = %d\n",fat,res);
  return 0;
}