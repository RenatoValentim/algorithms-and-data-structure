#include "../../external/Unity/unity.h"
#include "../../src/recursion/total_count_items.h"

void shouldReturnTotalItemsArr() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int total = totalCountItems(arr, size, 0);

  TEST_ASSERT_EQUAL(5, total);
}
