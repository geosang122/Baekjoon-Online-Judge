#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[9] = { 0 };
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &array[i]);
		sum += array[i];
		if (i > 0) { //정렬
			int left = i - 1, right = i;
			while (array[left] > array[right] && left >= 0) {
				array[left] = array[left] + array[right];
				array[right] = array[left] - array[right];
				array[left] = array[left] - array[right];
				left--;
				right--;
			}
		}
	}
	for (int w = 0; w < 8; w++) {
		for (int j = w + 1; j < 9; j++) {
			if (array[w] + array[j] == sum - 100)
			{
				array[w] = 0, array[j] = 0;
				goto EXIT;
			}
		}
	}
	EXIT:
	for (int i = 0; i < 9; i++) {
		 if(array[i]!=0) printf("%d\n", array[i]);
	}
}
