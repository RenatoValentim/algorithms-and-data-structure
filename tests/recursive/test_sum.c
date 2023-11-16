#include "test_sum.h"
#include "../../external/Unity/unity.h"
#include "../../src/recursive/sum.h"

void shouldSumAllValuesAndReturnTheTotal() {
  int arr[] = {2, 4, 6};
  int size = sizeof(arr) / sizeof(arr[0]);

  int total = sum(arr, size);

  TEST_ASSERT_EQUAL(12, total);
}

void shouldReturnImmediatelyTheValueIfArrayHasOnlyOneValue() {
  int arr[] = {2};
  int size = sizeof(arr) / sizeof(arr[0]);

  int total = sum(arr, size);

  TEST_ASSERT_EQUAL(2, total);
}

void shouldReturnZeroIfTheArrayIsEmpty() {
  int arr[] = {};
  int size = sizeof(arr) / sizeof(arr[0]);

  int total = sum(arr, size);

  TEST_ASSERT_EQUAL(0, total);
}
