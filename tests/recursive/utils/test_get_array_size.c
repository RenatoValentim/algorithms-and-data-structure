#include "../../../external/Unity/unity.h"
#include "../../../src/recursive/utils/get_array_size.h"
#include "../../../utils/sentinel.h"


void shouldReturnTotalItemsArrWithSequentialValues() {
  int arr[] = {1, 2, 3, 4, 5, ARRAY_INT_SENTINEL};
  int index = 0;

  int size = getArrSize(arr, index, ARRAY_INT_SENTINEL);

  TEST_ASSERT_EQUAL(5, size);
}

void shouldReturnTotalItemsArrWithoutSequentialValues() {
  int arr[] = {1, 2, 5, 8, 9, ARRAY_INT_SENTINEL};
  int index = 0;

  int size = getArrSize(arr, index,ARRAY_INT_SENTINEL);

  TEST_ASSERT_EQUAL(5, size);
}

void shouldReturnZeroIfEmptyArray() {
  int arr[] = {ARRAY_INT_SENTINEL};
  int index = 0;

  int size = getArrSize(arr, index, ARRAY_INT_SENTINEL);

  TEST_ASSERT_EQUAL(0, size);
}

void shouldReturnNegativeNumberIfIndexLessThenZero() {
  int arr[] = {ARRAY_INT_SENTINEL};
  int index = -1;

  int size = getArrSize(arr, index, ARRAY_INT_SENTINEL);

  TEST_ASSERT_EQUAL(-1, size);
}
