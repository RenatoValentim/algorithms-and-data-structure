#include "binary_search.h"

Result binarySearch(int arr[], int arrSize, int value) {
  Result result;
  int i;
  for (i = 0; i < arrSize; i++) {
    if (arr[i] == value) {
      result.index = i;
      result.value = arr[i];
      return result;
    }
  }
  result.index = -1;
  result.value = -1;
  return result;
}
