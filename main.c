#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 7

struct BubbleArray {
	int newArr[SIZE];
	char name[20];
};

struct BubbleArray* BubbleSort(struct BubbleArray *arr, int size);

int main(int argc, char *argv[]) {
	struct BubbleArray s1;
	strcpy(s1.name, "Session_1");
	int initialArr[SIZE] = {2, 1, 4, 2, 1, 2, 3};
	memcpy(s1.newArr, initialArr, SIZE * sizeof(int));

	struct BubbleArray *sortedArray = BubbleSort(&s1, SIZE);

	printf("Sorted Array:\n");
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", sortedArray->newArr[i]);
  }
  printf("\n");

	return 0;
}

struct BubbleArray* BubbleSort(struct BubbleArray *arr, int size) {
	for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr->newArr[j] > arr->newArr[j + 1]) {
        int temp = arr->newArr[j];
        arr->newArr[j] = arr->newArr[j + 1];
        arr->newArr[j + 1] = temp;
      }
    }
  }
  return arr;
}
