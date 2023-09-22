#include "../../external/Unity/unity.h"
#include "../../src/binary_search/binary_search.h"

void shouldReturnCorrectValuePosition(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  Result result = binarySearch(numbers, size, 3);

  TEST_ASSERT_EQUAL(2, result.index);
  TEST_ASSERT_EQUAL(3, result.value);
}

void shouldReturnNegativePositionIfValueNotFound(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers) / sizeof(numbers[0]);

  Result result = binarySearch(numbers, size, 0);

  TEST_ASSERT_EQUAL(-1, result.index);
  TEST_ASSERT_EQUAL(-1, result.value);
}
