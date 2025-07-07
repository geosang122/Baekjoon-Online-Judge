#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int array[5] = { 0 };
	for (int j = 0; j < 3; j++) {
		int count = 0;
		for (int i = 0; i < 4; i++) {
			scanf("%d", &array[i]);
			if (array[i] == 1) count++;
		}
		switch (count) {
		case 0:
			printf("D\n");
			break;
		case 1:
			printf("C\n");
			break;
		case 2:
			printf("B\n");
			break;
		case 3:
			printf("A\n");
			break;
		case 4:
			printf("E\n");
		}
	}
}
