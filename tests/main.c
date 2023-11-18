#include "../external/Unity/unity.h"
#include "recursive/test_get_array_size.h"
#include "recursive/test_sum.h"
#include "structured/test_binary_search.h"
#include "recursive/test_binary_search.h"

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
  RUN_TEST(shouldReturnTotalItemsArrWithSequentialValues);
  RUN_TEST(shouldReturnTotalItemsArrWithoutSequentialValues);
  RUN_TEST(shouldReturnZeroIfEmptyArray);
  RUN_TEST(shouldReturnCorrectPositionAndValue_Recursive);
  RUN_TEST(shouldReturnNegativePositionAndValueIfValueNotFound_Recursive);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArrayEmpty_Recursive);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArrayNULL_Recursive);

  return UNITY_END();
}
