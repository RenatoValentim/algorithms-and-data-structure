#include "test_sum.h"
#include "../../external/Unity/unity.h"
#include "../../src/recursive/sum.h"
#include "../../utils/sentinel.h"

void shouldSumAllValuesAndReturnTheTotal() {
  int arr[] = {2, 4, 6, SENTINEL};

  int total = sum(arr);

  TEST_ASSERT_EQUAL(12, total);
}

void shouldReturnImmediatelyTheValueIfArrayHasOnlyOneValue() {
  int arr[] = {2, SENTINEL};

  int total = sum(arr);

  TEST_ASSERT_EQUAL(2, total);
}

void shouldReturnZeroIfTheArrayIsEmpty() {
  int arr[] = {SENTINEL};

  int total = sum(arr);

  TEST_ASSERT_EQUAL(0, total);
}
