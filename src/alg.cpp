// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
  int right = size - 1;
  int middle = 0;
  int count = 0;
  while (left <= right) {
    middle = (left + right) / 2;
    if (*(arr + middle) > value) {
      right = middle - 1;
    }
    if (*(arr + middle) < value) {
      left = middle + 1;
    }
    if (*(arr + middle) == value) {
            count++;
            int i = middle - 1;
            while (i >= left && arr[i] == value) {
                count++;
                i--;
            }
            int j = middle + 1;
            while (j <= right && arr[j] == value) {
                count++;
                j++;
            }
            return count;
    }
  }
  return 0;
}
