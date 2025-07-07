#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[6] = { 0 };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
		sum += array[i];
		//정렬
		if (i > 0) {
			int left=i-1, right = i;
			while (array[left] > array[right]&&left>=0) {
				array[left] = array[left] + array[right];
				array[right] = array[left] - array[right];
				array[left]= array[left] - array[right];
				left--;
				right--;
			}
		}
	}
	printf("%d\n%d", sum / 5, array[2]);
}
