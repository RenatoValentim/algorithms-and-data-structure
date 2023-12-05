#include <stdio.h>

int getArrSize(int arr[], int index, int sentinel) {
  if (arr == NULL) {
    return 0;
  }
  if (index < 0) {
    return -1;
  }
  if (arr[index] == sentinel) {
    return 0;
  }
  return 1 + getArrSize(arr, index + 1, sentinel);
}
