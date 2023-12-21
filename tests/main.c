#include "../external/Unity/unity.h"
#include "recursive/utils/test_get_array_size.h"
#include "recursive/examples/test_sum.h"
#include "structured/algorithms/test_binary_search.h"
#include "recursive/algorithms/test_binary_search.h"

void setUp(void) {}

void tearDown(void) {}

int main(void) {
  UNITY_BEGIN();

  // structured binary search
  RUN_TEST(shouldReturnCorrectPositionAndValue);
  RUN_TEST(shouldReturnNegativePositionAndValueIfValueNotFound);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArrayEmpty);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArrayNULL);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArraySizeEqualZero);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArraySizeNeative);
  RUN_TEST(shouldReturnZero);

  // recursive sum
  RUN_TEST(shouldSumAllValuesAndReturnTheTotal);
  RUN_TEST(shouldReturnImmediatelyTheValueIfArrayHasOnlyOneValue);
  RUN_TEST(shouldReturnZeroIfTheArrayIsEmpty);

  // recursive get get array size
  RUN_TEST(shouldReturnTotalItemsArrWithSequentialValues);
  RUN_TEST(shouldReturnTotalItemsArrWithoutSequentialValues);
  RUN_TEST(shouldReturnZeroIfEmptyArray);
  RUN_TEST(shouldReturnNegativeNumberIfIndexLessThenZero);

  // recursive binary search
  RUN_TEST(shouldReturnCorrectPositionAndValue_Recursive);
  RUN_TEST(shouldReturnNegativePositionAndValueIfValueNotFound_Recursive);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArrayEmpty_Recursive);
  RUN_TEST(shouldReturnNegativePositionAndValueIfArrayNULL_Recursive);
  RUN_TEST(shouldReturnZero_Recursive);

  return UNITY_END();
}
