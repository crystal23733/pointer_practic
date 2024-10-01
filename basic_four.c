#include <stdio.h>

int swap(int x, int y);

int main(void) {
  int a = 10, b = 20;

  swap(a, b);
  printf("a:%d, b:%d\n", a, b);
  return 0;
}

int swap(int x, int y) {
  int temp;

  temp = x;
  printf("temp:%d\n", temp);
  x = y;
  printf("x:%d\n", x);
  y = temp;
  printf("y:%d\n", y);
}
