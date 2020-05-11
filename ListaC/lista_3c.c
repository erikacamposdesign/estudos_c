/*Lê 3 números double em 3 variáveis: a, b e c. Em seguida, faz troca de valores 
entre as variáveis de modo que: a <= b && b <= c.*/

#include <stdio.h>
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

int main()
{
	double a,b,c,aux,aux1;
    
	scanf("%d %d %d",&a, &b, &c);
	printf("%d %d %d\n",a,b,c);
	aux=c;//10
	c=MAX((MAX(a,b)),c);//(10,20),30)=30
	aux1=a;//30
	a=MIN(MIN(a,b),aux);
	//b=MAX((MIN(aux,b)),aux1);
	b=MAX((MIN(aux,c)),b);
	printf("%d %d %d\n",a,b,c);
	return 0;
}