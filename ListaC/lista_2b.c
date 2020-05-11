#include <stdio.h>
  #define soma(a,b) a+b
  #define prod(a,b) a*b
  void main(void)
  {
     int i=3, j=5;
     printf(“%d”, 2*soma(i,j));
     printf(“%d”, prod(i+j,j-i));
  }