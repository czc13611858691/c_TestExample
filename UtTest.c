#include "acutest/include/acutest.h"
#include "fun1.c"

void Test_Of_fun_Init(void)
{
    fun1();
}

TEST_LIST = {
  { "Test_Of_fun_Init", Test_Of_fun_Init },
  { NULL, NULL }	// Must be at the end
};
