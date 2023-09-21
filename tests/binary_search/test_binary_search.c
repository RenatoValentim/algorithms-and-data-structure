#include "../../external/Unity/unity.h"
#include "../../src/binary_search/binary_search.h"

void shouldReturnCorrectValuePosition(void) {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int position = binarySearch(numbers, 3);
  TEST_ASSERT_EQUAL(2, position);
}
