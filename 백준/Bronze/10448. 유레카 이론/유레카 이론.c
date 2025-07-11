#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int k, t;
	int ary[50] = { 0 };
	scanf("%d", &t);
	for (int i = 1; i <46 ; i++) ary[i] = i * (i + 1) / 2;
	while (t--){
		int flag = 0;
		scanf("%d", &k);
		for (int i = 1; i < 46; i++) {
			for (int j = 1; j < 46; j++) {
				for (int w = 1; w < 46; w++) {
					if (k == ary[i] + ary[j] + ary[w]) flag = 1;
				}
			}
		}
		printf("%d\n", flag);
	}
}