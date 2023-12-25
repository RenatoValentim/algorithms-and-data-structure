#include "binary_search.h"

Result binarySearch(int arr[], int arrSize, int value) {
  Result result;

  int low = 0;
  int high = arrSize - 1;

  while (low <= high) {
    int middle = (low + high) / 2;
    int guess = arr[middle];

    if (guess == value) {
      result.index = middle;
      result.value = value;
      return result;
    }

    if (guess > value) {
      high = middle - 1;
    } else {
      low = middle + 1;
    }
  }

  result.index = -1;
  result.value = -1;
  return result;
}
