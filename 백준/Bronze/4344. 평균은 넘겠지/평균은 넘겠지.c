#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a[1000] = { 0 };
		double sum = 0;
		double count = 0;
		int t;
		scanf("%d", &t);
		for (int j = 0; j < t; j++) {
			scanf("%d", &a[j]);
			sum += a[j];
		}
		double average = sum / t;
		for (int j = 0; j < t; j++) {
			if (average < a[j]) count++;
		}
		printf("%.3f%\n", count/t*100);
	}
}