#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "test.h"

Test_t *test_init(int number)
{
  Test_t *deneme = malloc(sizeof(Test_t));
  deneme->count = number;
  return deneme;
}

void test_updateCount(Test_t *tester, int number)
{
  tester->count = number;
}

int test_getCount(Test_t *tester)
{
  return tester->count;
}