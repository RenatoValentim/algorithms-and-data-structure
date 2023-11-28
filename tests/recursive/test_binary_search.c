#include "../../external/Unity/unity.h"
#include "../../src/recursive/binary_search.h"
#include "../../utils/sentinel.h"
#include <stdio.h>

void shouldReturnCorrectPositionAndValue_Recursive(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, SENTINEL};

  int output = binarySearchRecursive(numbers, 3);

  TEST_ASSERT_EQUAL(3, output);
}

void shouldReturnNegativePositionAndValueIfValueNotFound_Recursive(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, SENTINEL};

  int output = binarySearchRecursive(numbers, 0);

  TEST_ASSERT_EQUAL(-1, output);
}

void shouldReturnNegativePositionAndValueIfArrayEmpty_Recursive(void) {
  int numbers[] = {SENTINEL};

  int output = binarySearchRecursive(numbers, 3);

  TEST_ASSERT_EQUAL(-1, output);
}

void shouldReturnNegativePositionAndValueIfArrayNULL_Recursive(void) {
  int numbers[] = {SENTINEL};

  int output = binarySearchRecursive(NULL, 3);

  TEST_ASSERT_EQUAL(-1, output);
}

void shouldReturnNegativePositionAndValueIfArraySizeNeative_Recursive(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, SENTINEL};

  int output = binarySearchRecursive(numbers, 3);

  TEST_ASSERT_EQUAL(-1, output);
}
