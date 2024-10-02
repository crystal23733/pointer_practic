#include <stdio.h>

int main(void) {
  int ary[3];
  int *pa = ary; // 포인터에 배열명 저장

  *pa = 10;       // 첫 번째 배열명에 값 대입
  *(pa + 1) = 20; // 두 번째 배열명에 값 대입
  pa[2] = pa[0] + pa[1];

  for (int i = 0; i < 3; i++) {
    printf("%d\n", ary[i]);
  }

  return 0;
}
