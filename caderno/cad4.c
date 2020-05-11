/*Palavra da máquina*/
#include <stdio.h>

int main(){
    int masc=~0, cont=0;
    while(masc){
        masc<<=1;
        cont++;
        printf("masc é %d\n", masc);
    }
    printf("Palavra da máquina: %d bits", cont);
    return 0;
}