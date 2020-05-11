#include <stdio.h>
#include <conio.h>
#define ESC 27



int main(){
	int control=0,alfaMai=0,alfaMin=0,num=0,imprimivel=0;
	unsigned char tecla;
	tecla=getch();
	while(tecla!= ESC){
		//Caracter de controle: 	0 a 31 e 127
		if(tecla>=1 && tecla<=31 ||tecla ==127)
		{
			control++;
		}
		//Caracter alfabético maiúsculo: 	65 a 90
		if(tecla>=65 && tecla<=90){
			alfaMai++;
		}
		//Caracter alfabético minúsculo:	97 a 122
		if(tecla>=97 && tecla<=122)
		{
			alfaMin++;
	
		}
		//Caracter numérico: 	48 a 57
		if(tecla>=48 && tecla<=57){
			num++;
		}
		//Caracter de pontuação: imprimível, não alfabético e não numérico.
		if(tecla>=32 && tecla<=126)
		{
			imprimivel++;
		}
		printf("\n %c",tecla);
		tecla=getch();
	}
	printf("\n %d controle\n %d alfabético maiúsculo\n %d alfabetico minusculo\n %d numerico\n %d imprimivel",control,alfaMai,alfaMin,num,imprimivel);
}
