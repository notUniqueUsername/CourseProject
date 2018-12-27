#include "acutest.h"
#include "Roots.h"
#include "Factorial.h"

void test_2_roots(void)
{
    double a = 2;
    double b = 3;
    double c = -2;
    Results result = FindRoots(a,b,c);
    Results expected;
    expected.x1 = 0.5;
    expected.x2 = -2;
    expected.ExistenceRealRoots = 1;
    TEST_CHECK(result.x1 == expected.x1);
    TEST_CHECK(result.x2 == expected.x2);
    TEST_CHECK(result.ExistenceRealRoots == expected.ExistenceRealRoots);
}

void test_1_roots(void)
{
    double a = 2;
    double b = 4;
    double c = 2;
    Results result = FindRoots(a,b,c);
    Results expected;
    expected.x1 = -1;
    expected.x2 = -1;
    expected.ExistenceRealRoots = 1;
    TEST_CHECK(result.x1 == expected.x1);
    TEST_CHECK(result.x2 == expected.x2);
    TEST_CHECK(result.ExistenceRealRoots == expected.ExistenceRealRoots);
}

void test_0_roots(void)
{
    double a = 3;
    double b = 3;
    double c = 3;
    Results result = FindRoots(a,b,c);
    Results expected;
    expected.x1 = 0;
    expected.x2 = 0;
    expected.ExistenceRealRoots = 0;
    TEST_CHECK(result.x1 == expected.x1);
    TEST_CHECK(result.x2 == expected.x2);
    TEST_CHECK(result.ExistenceRealRoots == expected.ExistenceRealRoots);
}

void test_Factorial(void) {
    int arg = 3;
    long result = factorial(arg);
    TEST_CHECK(result == 6);
}

void test_RootCount_2_root(void) {
    double a = 3;
    double b = 3;
    double c = -3;
    int result = RootsCount(a,b,c);
    TEST_CHECK(result == 2);
}

void test_RootCount_1_root(void) {
    double a = 2;
    double b = 4;
    double c = 2;
    int result = RootsCount(a,b,c);
    TEST_CHECK(result == 1);
}

void test_RootCount_0_root(void) {
    double a = 3;
    double b = 3;
    double c = 3;
    int result = RootsCount(a,b,c);
    TEST_CHECK(result == 0);
}

TEST_LIST = {
    { "test_2_roots", test_2_roots },
    { "test_1_roots", test_1_roots },
    { "test_0_roots", test_0_roots },
    { "test_Factorial", test_Factorial },
    { "test_RootCount_2root", test_RootCount_2_root },
    { "test_RootCount_1root", test_RootCount_1_root },
    { "test_RootCount_0root", test_RootCount_0_root },
    { NULL, NULL }
};