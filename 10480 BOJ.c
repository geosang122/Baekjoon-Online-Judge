#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ICPC > Regionals > North America > North America Qualification Contest > ACM-ICPC North America Qualifier 2013 A¹ø
int main() {
	int n;
	scanf("%d", &n);
	int num;

	for (int i = 0;i < n;i++) {
		scanf("%d", &num);
		if (abs(num) % 2 == 0) printf("%d is even\n", num);
		else printf("%d is odd\n", num);
	}

	return 0;
}