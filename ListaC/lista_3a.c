/* Lê caracteres do teclado enquanto não se digitar ESC(ASCII 27). Para cada caracter lido, classificá-lo como:

- Caracter de controle: 	0 a 31 e 127
- Caracter alfabético maiúsculo: 	65 a 90
- Caracter alfabético minúsculo:	97 a 122
- Caracter numérico: 	48 a 57
- Caracter de pontuação: imprimível, não alfabético e não numérico.
Obs.: Caracter imprimível: 32 a 126. Caracter alfabético: maiúsculos + minúsculos  */

#include <stdio.h>
#include <conio.h>

void main(){

    char x;
    printf ("Digite um caractere: ");
    x = getch ();

    while(x != 27){
    
    if(x >= 65 && x <= 90)
        printf("\nMaiusculo");

    else if (x >= 97 && x <= 122)
        printf("\nMinusculo");

    else if (x >= 48 && x <= 57)
        printf("\nNumerico");

    else if ((x >= 0 && x <= 31) || (x == 127))
        printf("\nControle");

    else printf ("\nPontuacao");
    
    printf ("\nDigite um caractere: ");
    x = getch ();
    }
}