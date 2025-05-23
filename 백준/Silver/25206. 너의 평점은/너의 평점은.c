#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char subject[51];
	float much;
	char a[3];
	float sum=0;
	float count = 0;
	float grade;
	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s", subject, &much, a);
		if (a[0] == 'A') grade = 4.0;
		else if (a[0] == 'B') grade = 3.0;
		else if (a[0] == 'C') grade = 2.0;
		else if (a[0] == 'D') grade = 1.0;
		else if (a[0] == 'F') grade = 0.0;
		else if (a[0] == 'P') {
			continue;
		}
		if (a[1] == '+') grade += 0.5;
		sum += grade * much;
		count += much;
		getchar();
	}
	printf("%f", sum / count);
}