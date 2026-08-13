#include <stdio.h>
int main() {
  int num;
  float fnum;
  double dnum;
  char letter;
  char name[];
  printf("%zu" , sizeof(num));
  printf("%zu" , sizeof(fnum));
  printf("%zu" , sizeof(dnum));
  printf("%zu" , sizeof(letter));
  printf("%zu" , sizeof(name));
  return 0;


}
