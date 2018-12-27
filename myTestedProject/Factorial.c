#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define TEST_NO_MAIN



long factorial(int arg) 
{
    TEST_NO_MAIN
    long result = 1;
    int i;
    for (i = 2; i <= arg; ++i) {
        result *= i;
     }
    return result;
}