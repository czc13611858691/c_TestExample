#include <stdio.h>
#include "fff/fff.h"

DEFINE_FFF_GLOBALS;

FAKE_VOID_FUNC(fun1);

void main(void)
{
    fun1();
    printf("hello world\r\n");
}