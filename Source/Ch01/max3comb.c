// �������� �ִ��� ���ϴ� ���α׷�
#include <stdio.h>

/*a,b,c�� �ִ��� ����*/
int max3(a, b, c) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main(void) {
	printf("max3(%d,%d,%d) = %d\n", 3, 2, 1, max3(3, 2, 1));
	printf("max3(%d,%d,%d) = %d\n", 3, 2, 2, max3(3, 2, 2));
	printf("max3(%d,%d,%d) = %d\n", 1, 2, 3, max3(1, 2, 3));
}