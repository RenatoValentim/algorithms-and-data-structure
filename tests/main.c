#include "../external/Unity/unity.h"
#include "binary_search/test_binary_search.h"

void setUp(void) {}

void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();

  RUN_TEST(shouldReturnCorrectValuePosition);

  return UNITY_END();
}
