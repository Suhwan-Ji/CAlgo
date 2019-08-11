#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;
	int max;
	printf("세정수의 최댓값 구하기\n");
	printf("a의 값: "); scanf("%d", &a);
	printf("b의 값: "); scanf("%d", &b);
	printf("c의 값: "); scanf("%d", &c);
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	printf("최대값은 %d입니다.", max);

	return 0;
}