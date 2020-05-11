#include <stdio.h>
#define soma(a,b) a+b
#define prod(a,b) a*b
int main() {
    int i=3, j=5;
    printf("%d\n", 2*soma(i,j));
    printf("%d\n", prod(i+j,j-i));
    return 0;
}