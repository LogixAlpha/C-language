#include <stdio.h>
int main() {
  int num = 1;
  float fnum = 1.00;
  double dnum = 1.0001;
  char letter = 'A';
  char name[] = "Example";
  printf("%zu [%i] \n" , sizeof(num),num);
  printf("%zu [%f] \n" , sizeof(fnum),fnum);
  printf("{Float with Precize 2 digits after comma} : %zu [%.2f] \n",sizeof(fnum),fnum);
  printf("%zu [%lf] \n" , sizeof(dnum),dnum);
  printf("%zu [%c] \n" , sizeof(letter),letter);
  printf("%zu [%s]" , sizeof(name),name);
  return 0;


}
