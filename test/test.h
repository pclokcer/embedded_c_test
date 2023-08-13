#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct
{
  int count;
} Test_t;

Test_t *test_init(int number);
void test_updateCount(Test_t *tester, int number);
int test_getCount(Test_t *tester);
