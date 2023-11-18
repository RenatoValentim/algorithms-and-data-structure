#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

typedef struct {
  int index;
  int value;
} Result;

Result binarySearchRecursive(int arr[], int value);

#endif // !BINARY_SEARCH_H
