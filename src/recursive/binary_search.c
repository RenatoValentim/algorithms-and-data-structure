#include "binary_search.h"
#include "get_array_size.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binarySearchRecursive(int arr[], int value, int sentinel) {
  if (arr == NULL) {
    return -1;
  }
  int low = 0;
  int arrSize = getArrSize(arr, low, sentinel);
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
    return binarySearchRecursive(arr + (middle + 1), value, sentinel);
  } else if (guess > value) {
    high = middle - 1;
    int size = high + 1;
    int *newArr = (int *)malloc((size) * sizeof(int));
    if (newArr == NULL) {
      fprintf(stderr, "Memory allocation failed.\n");
      exit(EXIT_FAILURE);
    }
    memcpy(newArr, arr, (size) * sizeof(int));
    newArr[size] = sentinel;
    int output = binarySearchRecursive(newArr, value, sentinel);
    free(newArr);
    return output;
  }
  return -1;
}
