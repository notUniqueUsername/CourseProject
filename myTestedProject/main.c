#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "Factorial.h"
#include "Roots.h"
#include "acutest.h"


int main(int argc, char** argv) {
    printf("Type an integer and press Enter to calculate the integer's factorial: \n");
    int arg;
    fflush(stdout);
    scanf("%d", &arg);
	int x = RootsCount(2,4,2);
    long s = factorial(arg);
    printf("factorial(%d) = %ld\n", arg, factorial(arg));
	printf("factorial(%d) = %ld\n", arg, s);
    return (EXIT_SUCCESS);
}
 