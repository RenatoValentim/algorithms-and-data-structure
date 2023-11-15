#include <stdio.h>

#define SENTINEL 0

int getArrSize(int arr[], int index) {
  if (arr[index] == SENTINEL) {
    return 0;
  }

  return 1 + getArrSize(arr, index + 1);
}
