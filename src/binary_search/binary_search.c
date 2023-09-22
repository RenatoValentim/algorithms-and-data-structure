#include "binary_search.h"

int binarySearch(int numbers[], int arrSize, int value) {
  int i;
  for (i = 0; i < arrSize; i++) {
    if (numbers[i] == value) {
      return i;
    }
  }
  return -1;
}
