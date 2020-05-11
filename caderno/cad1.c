#include <stdio.h>

int main(){
    int idade;
    char resposta;


    printf("Digite a idade: ");
    scanf("%d", &idade);

    resposta = (idade >= 18)? 'S':'N';

    printf("%c é maior de idade", resposta);
}