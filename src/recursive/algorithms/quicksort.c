#include "../../../utils/sentinel.h"
#include "../utils/get_array_size.h"

int *quickSort(int arr[]) {
  int size = getArrSize(arr, 0, ARRAY_INT_SENTINEL);
  int newArr[size];

  int i;
  for (i = 0; i < size; i++) {
    newArr[i] = i * 2;
  }

  return newArr;
}
