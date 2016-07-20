#include <stdio.h>
#include <string.h>

int main(){
  register int a = 5, b = 5, c;
  int i;
  for(i=0; i<=1000000; i++){
    c = a+b;
  }
  printf("%d", c);      
};
