#include <stdio.h>
#include <string.h>

void teste(){
  static s = 10;
  s++;
  printf("%d\n", s);
};

int main(){
  teste();
  teste();
  teste();
  teste();
};
