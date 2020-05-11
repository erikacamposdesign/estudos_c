/* Lê caracteres do teclado enquanto não se digitar ESC(ASCII 27). Para cada caracter lido, classificá-lo como:

- Caracter de controle: 	0 a 31 e 127
- Caracter alfabético maiúsculo: 	65 a 90
- Caracter alfabético minúsculo:	97 a 122
- Caracter numérico: 	48 a 57
- Caracter de pontuação: imprimível, não alfabético e não numérico.
Obs.: Caracter imprimível: 32 a 126. Caracter alfabético: maiúsculos + minúsculos  */

#include <stdio.h>

void main(void){
    char x;
    printf("Digite um caractere: ");
    scanf("%c", &x);
    x = getchar();

    while(x != 27){
    
    if(x >= 65 && x <= 90)
        printf("Maiusculo");

    else if (x >= 97 && x <= 122)
        printf("Minusculo");

    else if (x >= 48 && x <= 57)
        printf("Numerico");

    else if ((x >= 0 && x <= 31) || (x == 127))
        printf("Controle");

    else printf ("Pontuacao");
    
    printf("\nDigite um caractere: ");
    scanf("%c", &x);
    x = getchar();
    }
}

