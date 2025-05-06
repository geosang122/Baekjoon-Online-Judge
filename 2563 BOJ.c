#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[100][100] = { 0 };

	int num; // how much input
	int x, y; // how far from x,y
	int sum=0; // sum of area
	scanf("%d", &num);
	for (int w = 0;w < num;w++) { // block which square hides is 1
		scanf("%d %d", &x, &y);
		for (int row = x;row < x + 10;row++) {
			for (int col = y;col < y+10;col++) {
				a[row][col] = 1;
			}
		}
	}
	for (int i = 0;i < 100;i++) {
		for (int j = 0;j < 100;j++)
			sum += a[i][j]; //sum of square area
	}
	printf("%d", sum);
	
	return 0;
}
