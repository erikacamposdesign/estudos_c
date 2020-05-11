#include <stdio.h>

int main()
{
  float vendas, porcent, comissao;

  printf("Qual o total de vendas? \n");
  scanf("%f", &vendas);
  printf("Qual a porcentagem de comissão? \n");
  scanf("%f", &porcent);

  comissao = (porcent / 100 * vendas) + vendas;

  printf("Ao final, o vendedor receberá R$ %.2f \n", comissao);

  return 0;
}
