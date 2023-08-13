#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "test/test.h"

int main()
{
  printf("starting program\n");

  Test_t *deneme = test_init(5);
  int a = test_getCount(deneme);
  printf("one %d\n", a);

  test_updateCount(deneme, 10);
  int b = test_getCount(deneme);
  printf("two %d\n", b);

  return 1;
}