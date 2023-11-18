#include "../../external/Unity/unity.h"
#include "../../src/recursive/binary_search.h"
#include "../../utils/sentinel.h"
#include <stdio.h>

void shouldReturnCorrectPositionAndValue_Recursive(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, SENTINEL};

  Result result = binarySearchRecursive(numbers, 3);
  printf("%d\n", result.index);
  printf("%d\n", result.value);

  TEST_ASSERT_EQUAL(2, result.index);
  TEST_ASSERT_EQUAL(3, result.value);
}

void shouldReturnNegativePositionAndValueIfValueNotFound_Recursive(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, SENTINEL};

  Result result = binarySearchRecursive(numbers, 0);

  TEST_ASSERT_EQUAL(-1, result.index);
  TEST_ASSERT_EQUAL(-1, result.value);
}

void shouldReturnNegativePositionAndValueIfArrayEmpty_Recursive(void) {
  int numbers[] = {SENTINEL};

  Result result = binarySearchRecursive(numbers, 3);

  TEST_ASSERT_EQUAL(-1, result.index);
  TEST_ASSERT_EQUAL(-1, result.value);
}

void shouldReturnNegativePositionAndValueIfArrayNULL_Recursive(void) {
  int numbers[] = {SENTINEL};

  Result result = binarySearchRecursive(NULL, 3);

  TEST_ASSERT_EQUAL(-1, result.index);
  TEST_ASSERT_EQUAL(-1, result.value);
}

void shouldReturnNegativePositionAndValueIfArraySizeNeative_Recursive(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, SENTINEL};

  Result result = binarySearchRecursive(numbers, 3);

  TEST_ASSERT_EQUAL(-1, result.index);
  TEST_ASSERT_EQUAL(-1, result.value);
}
