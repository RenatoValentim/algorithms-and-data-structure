#include "get_array_size.h"
#include "../../utils/sentinel.h"

int sum(int arr []) {
  int size = getArrSize(arr, 0, ARRAY_INT_SENTINEL);
  if (size == 1) {
    return arr[0];
  }
  if (size == 0) {
    return 0;
  }
  return arr[0] + sum(arr + 1);
}
