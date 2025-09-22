#include <stdio.h>

int num[5] = {85, 3, 41, 27, 64};

int findMax(int numbers[], int size) {
  if (size <= 0) {
    return 0;
  }

  int maxNum = numbers[0];
  for (int i = 1; i < size; i++) {
    if (numbers[i] > maxNum) {
      maxNum = numbers[i];
    }
  }

  return maxNum;
}

int findMin(int numbers[], int size) {
  if (size <= 0) {
    return 0;
  }

  int minNum = numbers[0];
  for (int i = 1; i < size; i++) {
    if (numbers[i] < minNum) {
      minNum = numbers[i];
    }
  }

  return minNum;
}

int main() {
  int maxNumber = findMax(num, 5);
  int minNumber = findMin(num, 5);

  printf("Max Number in the Array: %d\n", maxNumber);
  printf("Min Number in the Array: %d\n", minNumber);
  return 0;
}
