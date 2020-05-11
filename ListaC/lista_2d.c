#include <stdio.h>

void main(void){
    unsigned char ch;
    for(ch=0; ch<256; ch++) /*essa merda nao para pq tá com 256*/
    printf("\n%3d\t%02X\t%c", ch,ch,ch);
    }