#include <stdio.h>

int largest_number(int *array, int size) {
  int max = array[0];
  int max2 = INT_MIN;

  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max2 = max;
      max = array[i];
    } else if (array[i] > max2) {
      max2 = array[i];
    }
  }

  return max;
}

int main() {
  int array[] = {10, 1, 2};
  int size = sizeof(array) / sizeof(array[0]);

  int largest = largest_number(array, size);
  int second_largest = max2;

  printf("The largest number is %d.\n", largest);
  printf("The second largest number is %d.\n", second_largest);

  return 0;
}

