#include <stdio.h>

#define SENTINEL 0

int getArrSize(int arr[], int index) {
  if (arr[index] == SENTINEL || arr[index] == '\0') {
    return 0;
  }
  return 1 + getArrSize(arr, index + 1);
}
