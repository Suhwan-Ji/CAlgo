/*�������� Q1,Q2,Q3*/
#include <stdio.h>

int max4(a, b, c, d) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	return max;
}

int min4(a, b, c, d) {
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	if (min > d) min = d;
	return min;
}

int main(void) {
	int a, b, c, d;
	printf("���� �װ��� �Է��ϼ���\n");
	printf("a : "); scanf_s("%d", &a);
	printf("b : "); scanf_s("%d", &b);
	printf("c : "); scanf_s("%d", &c);
	printf("d : "); scanf_s("%d", &d);

	printf("�Է� �������� a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);
	printf("�ִ밪: %d\n", max4(a, b, c, d));
	printf("�ּҰ�: %d\n", min4(a, b, c, d));
	
}