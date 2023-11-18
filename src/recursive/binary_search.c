#include "binary_search.h"
#include "get_array_size.h"
#include <stdio.h>

Result binarySearchRecursive(int arr[], int value) {
  Result result;

  if (!value || arr == NULL) {
    result.index = -1;
    result.value = -1;
    return result;
  }

  int arrSize = getArrSize(arr, 0);
  int low = 0;
  int hight = arrSize - 1;

  if (low <= hight) {
    int middle = (low + hight) / 2;
    int guess = arr[middle];
    if (guess == value) {
      result.index = middle;
      result.value = value;
      return result;
    }
    int i;
    int arrAux[] = {};
    if (guess > value) {
      hight = middle - 1;
      for (i = 0; i < hight; i++) {
        arrAux[i] = arr[1];
      }
      arr = arrAux;
    } else {
      low = middle + 1;
      for (i = 0; low > i; i++) {
        arrAux[i] = arr[1];
      }
      arr = arrAux;
    }
    return binarySearchRecursive(arr + 1, guess);
  }

  // while (low <= hight) {
  //   int middle = (low + hight) / 2;
  //   int guess = arr[middle];
  //
  //   if (guess == value) {
  //     result.index = middle;
  //     result.value = value;
  //     return result;
  //   }
  //
  //   if (guess > value) {
  //     hight = middle - 1;
  //   } else {
  //     low = middle + 1;
  //   }
  // }

  result.index = -1;
  result.value = -1;
  return result;
}
