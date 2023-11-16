#include "../../external/Unity/unity.h"
#include "../../src/recursion/get_array_size.h"

#define SENTINEL '\0'

void shouldReturnTotalItemsArrWithSequentialValues() {
  int arr[] = {1, 2, 3, 4, 5, SENTINEL};
  int index = 0;

  int size = getArrSize(arr, index);

  TEST_ASSERT_EQUAL(5, size);
}

void shouldReturnTotalItemsArrWithoutSequentialValues() {
  int arr[] = {1, 2, 5, 8, 9, SENTINEL};
  int index = 0;

  int size = getArrSize(arr, index);

  TEST_ASSERT_EQUAL(5, size);
}

void shouldReturnZeroIfEmptyArray() {
  int arr[] = {SENTINEL};
  int index = 0;

  int size = getArrSize(arr, index);

  TEST_ASSERT_EQUAL(0, size);
}
