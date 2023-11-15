#include "../external/Unity/unity.h"
#include "binary_search/test_binary_search.h"
#include "recursion/test_total_count_items.h"
#include "recursion/test_sum.h"

void setUp(void) {}

void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();

  RUN_TEST(shouldReturnCorrectPositionAndValue);
  RUN_TEST(shouldReturnNegativePositionAndValueIfValueNotFound);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArrayEmpty);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArrayNULL);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArraySizeEqualZero);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArraySizeNeative);
  RUN_TEST(shouldSumAllValuesAndReturnTheTotal);
  RUN_TEST(shouldReturnImmediatelyTheValueIfArrayHasOnlyOneValue);
  RUN_TEST(shouldReturnZeroIfTheArrayIsEmpty);
  RUN_TEST(shouldReturnTotalItemsArr);

  return UNITY_END();
}
