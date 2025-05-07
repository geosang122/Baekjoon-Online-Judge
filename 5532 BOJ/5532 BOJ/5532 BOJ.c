#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Olympiad > Japanese Olympiad in Informatics > Japanese Olympiad in Informatics Qualification Round > JOI 2012/2013 ¿¹¼± 1¹ø

int main() {
    int l; //days of vacation
    int a, b, c, d; // korean, math, 1day_korean_max, 1day_math_max
    int math, korean;
    scanf("%d%d%d%d%d", &l, &a, &b, &c, &d);
    korean = a % c ? a / c + 1 : a / c; // if remainder==0 -> (quotient) 
    math = b % d ? b / d + 1 : b / d; // elif remainder!=0 -> (quotient+1)
    l-=(math > korean ? math : korean); // l - (bigger one)
    printf("%d", l); // day can break
    return 0;
}