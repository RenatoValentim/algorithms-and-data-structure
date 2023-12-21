#include "../../../external/Unity/unity.h"
#include "../../../src/recursive/algorithms/quicksort.h"
#include "../../../utils/sentinel.h"
#include <stdio.h>

void shouldSortArrayInput(void) {
  int numbers[] = {3, 0, 5, 2, 4, 1, ARRAY_INT_SENTINEL};

  int *output = quickSort(numbers);
  printf("aqui %d\n", *output);

  int expected[] = {0, 1, 2, 3, 4, 5, ARRAY_INT_SENTINEL};
  TEST_ASSERT_EQUAL(expected, output);
}
