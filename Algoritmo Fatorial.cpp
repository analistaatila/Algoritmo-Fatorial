#include <stdio.h>

int main(void) 
{
  int res=1; // armazena o resultado do fatorial
  int fat;// armazena valor cujo fatorial será calculado
  printf("Digite um valor para calcular o fatorial:");
  scanf("%d",&fat);// obtém valor cujo fatorial será calculado 

  // estrutura de repetição que calcula o fatorial
  for(int i=1;i<=fat;i++){
    res = res*i; // realiza multiplicações sucessivas a partir de 1 até fat
  }
  // imprime o resultado
  printf("O fatorial de %d = %d\n",fat,res);
  return 0;
}