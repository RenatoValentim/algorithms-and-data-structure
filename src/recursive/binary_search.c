#include "binary_search.h"
#include "get_array_size.h"
#include <stdio.h>
#include <stdlib.h>

int binarySearchRecursive(int arr[], int value) {
  if (!value || arr == NULL) {
    return -1;
  }
  int low = 0;
  int arrSize = getArrSize(arr, low);
  if (arrSize == 0) {
    return -1;
  }
  int high = arrSize - 1;
  int middle = (low + high) / 2;
  int guess = arr[middle];
  if (guess == value) {
    return guess;
  }
  if (guess < value) {
    return binarySearchRecursive(arr + (middle + 1), value);
  } else if (guess > value) {
    high = middle - 1;
    int *newArr = (int *)malloc((high + 1) * sizeof(int));
    for (low = 0; low <= high; low++) {
      newArr[low] = arr[low];
    }
    int output = binarySearchRecursive(newArr, value);
    free(newArr);
    return output;
  }
  return -1;
}
