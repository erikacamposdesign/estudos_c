#include <stdio.h>

int main()
{
  float num, dobro;

  printf("Entre com um número \n");
  scanf("%f", &num);

  dobro = num * 2;
  printf("O dobro de %.1f é %.1f \n", num, dobro);
  return 0;
}
