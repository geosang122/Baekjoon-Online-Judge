#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[5][16] = {0};
	for (int i = 0; i < 5; i++) {
			scanf("%s", a[i]);
		}
	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if(a[i][j]!='\0'&& a[i][j] != '\n')
				printf("%c", a[i][j]);
		}
	}
}
