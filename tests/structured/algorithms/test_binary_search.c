#include "../../../external/Unity/unity.h"
#include "../../../src/structured/algorithms/binary_search.h"

void shouldReturnCorrectPositionAndValue(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  Result result = binarySearch(numbers, size, 3);

  TEST_ASSERT_EQUAL(2, result.index);
  TEST_ASSERT_EQUAL(3, result.value);
}

void shouldReturnZero(void) {
  int numbers[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  Result result = binarySearch(numbers, size, 0);

  TEST_ASSERT_EQUAL(1, result.index);
  TEST_ASSERT_EQUAL(0, result.value);
}

void shouldReturnNegativePositionAndValueIfValueNotFound(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  Result result = binarySearch(numbers, size, 0);

  TEST_ASSERT_EQUAL(-1, result.index);
  TEST_ASSERT_EQUAL(-1, result.value);
}

void shouldReturnNegativePositionAndValueIfArrayEmpty(void) {
  int numbers[] = {};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  Result result = binarySearch(numbers, size, 3);

  TEST_ASSERT_EQUAL(-1, result.index);
  TEST_ASSERT_EQUAL(-1, result.value);
}

void shouldReturnNegativePositionAndValueIfArrayNULL(void) {
  int numbers[] = {};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  Result result = binarySearch(NULL, size, 3);

  TEST_ASSERT_EQUAL(-1, result.index);
  TEST_ASSERT_EQUAL(-1, result.value);
}

void shouldReturnNegativePositionAndValueIfArraySizeEqualZero(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  Result result = binarySearch(numbers, 0, 3);

  TEST_ASSERT_EQUAL(-1, result.index);
  TEST_ASSERT_EQUAL(-1, result.value);
}

void shouldReturnNegativePositionAndValueIfArraySizeNeative(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  Result result = binarySearch(numbers, -1, 3);

  TEST_ASSERT_EQUAL(-1, result.index);
  TEST_ASSERT_EQUAL(-1, result.value);
}
