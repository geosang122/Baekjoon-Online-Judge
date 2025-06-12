#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	while (n--) {
		char num[62] = { 0 };
		scanf("%s", num);
		char ln=num[strlen(num) - 1];
		if (ln == '0' || ln == '2' || ln == '4' || ln == '6' || ln == '8') printf("even\n");
		else printf("odd\n");
	}
}