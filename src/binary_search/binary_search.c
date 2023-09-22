#include "binary_search.h"

int binarySearch(int arr[], int arrSize, int value) {
  int i;
  for (i = 0; i < arrSize; i++) {
    if (arr[i] == value) {
      return i;
    }
  }
  return -1;
}
