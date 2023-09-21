#include "../src/hello.h"
#include "Unity/unity.h"
#include <stdlib.h>
#include <string.h>

void setUp(void) {}

void tearDown(void) {}

void test_hello(void) {
  char *result = hello("John Doe");
  TEST_ASSERT_EQUAL_STRING("Hello John Doe", result);
  free(result);
}

int main(void) {
  UNITY_BEGIN();

  RUN_TEST(test_hello);

  return UNITY_END();
}
