#include "../../utils/sentinel.h"
#include <stdio.h>

int getArrSize(int arr[], int index) {
  if (arr == NULL) {
    return 0;
  }
  if (index < 0) {
    return -1;
  }
  if (arr[index] == SENTINEL) {
    return 0;
  }
  return 1 + getArrSize(arr, index + 1);
}
