#include <stdio.h>

int main(void) {
  double a = 3.4;
  double *pd = &a;
  int *pi;
  pi = (int *)pd;
  printf("%lf\n", *pd);
  printf("%d\n", *pi);

  return 0;
}
