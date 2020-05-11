#include <stdio.h>

int main()
{
  int idade;

  printf("Qual a idade do nadador?\n");
  scanf("%d", &idade);

  if (idade > 17)
    printf("A categoria é sênior \n");
  else
    if (idade < 10)
      printf("A categoria é infantil\n");
    else
      printf("A categoria é juvenil\n");

  return 0;
}
