#include <stdio.h>

int main()
{
  float real, cotacao, dolar;

  printf("Qual o valor em reais? \n");
  scanf("%f", &real);

  printf("Qual a cotação do dólar? \n");
  scanf("%f", &cotacao);

  dolar = real / cotacao;

  printf("A conversão resulta em %.2f dólares \n", dolar);

  return 0;
}
