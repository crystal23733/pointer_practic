#include <stdio.h>

int main(void) {
  int *p;
  p = (int *)100;
  *p = 10;
  printf("%d\n", &p);
  return 0;
}
