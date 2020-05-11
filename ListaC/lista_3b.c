/*Lê do teclado 5 números inteiros, e fornece:
-A média aritmética
-O produto dos 3 primeiros.
-Quantidade de dígitos (casas) do primeiro valor, através de sucessivas divisões por 10.*/

#include <stdio.h>
#define media(a, b, c, d, e) (a+b+c+d+e)/5
#define prod(a, b, c) a*b*c

int main(){
	int a,b,c,d,e,casas = 0;
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	printf("A média é: %d \n", media(a,b,c,d,e));
	printf("O prod dos tres primeiros e: %d \n", prod(a,b,c));

    while (a>0){
        a = a/10;
        casas++;
    }
    printf("O primeiro valor tem %d casa(s)\n", casas);
}