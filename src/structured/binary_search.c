#include "binary_search.h"

Result binarySearch(int arr[], int arrSize, int value) {
  Result result;

  if (!value) {
    result.index = -1;
    result.value = -1;
    return result;
  }

  int low = 0;
  int hight = arrSize - 1;

  while (low <= hight) {
    int middle = (low + hight) / 2;
    int guess = arr[middle];

    if (guess == value) {
      result.index = middle;
      result.value = value;
      return result;
    }

    if (guess > value) {
      hight = middle - 1;
    } else {
      low = middle + 1;
    }
  }

  result.index = -1;
  result.value = -1;
  return result;
}
