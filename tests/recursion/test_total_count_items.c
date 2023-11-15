#include "../../external/Unity/unity.h"
#include "../../src/recursion/total_count_items.h"

#define SENTINEL 0

void shouldReturnTotalItemsArrWithSequentialValues() {

  int arr[] = {1, 2, 3, 4, 5, SENTINEL};
  int size = getArrSize(arr);

  TEST_ASSERT_EQUAL(5, size);
}

void shouldReturnTotalItemsArrWithoutSequentialValues() {
  int arr[] = {1, 2, 5, 8, 9, SENTINEL};
  int size = getArrSize(arr);

  TEST_ASSERT_EQUAL(5, size);
}
