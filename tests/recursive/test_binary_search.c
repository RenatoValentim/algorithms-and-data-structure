#include "../../external/Unity/unity.h"
#include "../../src/recursive/binary_search.h"
#include "../../utils/sentinel.h"
#include <stdio.h>

void shouldReturnCorrectPositionAndValue_Recursive(void) {
  int numbers[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, ARRAY_INT_SENTINEL};

  int output = binarySearchRecursive(numbers, 3, ARRAY_INT_SENTINEL);

  TEST_ASSERT_EQUAL(3, output);
}

void shouldReturnNegativePositionAndValueIfValueNotFound_Recursive(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, ARRAY_INT_SENTINEL};

  int output = binarySearchRecursive(numbers, 0, ARRAY_INT_SENTINEL);

  TEST_ASSERT_EQUAL(-1, output);
}

void shouldReturnNegativePositionAndValueIfArrayEmpty_Recursive(void) {
  int numbers[] = {ARRAY_INT_SENTINEL};

  int output = binarySearchRecursive(numbers, 3, ARRAY_INT_SENTINEL);

  TEST_ASSERT_EQUAL(-1, output);
}

void shouldReturnNegativePositionAndValueIfArrayNULL_Recursive(void) {
  int numbers[] = {ARRAY_INT_SENTINEL};

  int output = binarySearchRecursive(NULL, 3, ARRAY_INT_SENTINEL);

  TEST_ASSERT_EQUAL(-1, output);
}

void shouldReturnNegativePositionAndValueIfArraySizeNeative_Recursive(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, ARRAY_INT_SENTINEL};

  int output = binarySearchRecursive(numbers, 3, ARRAY_INT_SENTINEL);

  TEST_ASSERT_EQUAL(-1, output);
}
