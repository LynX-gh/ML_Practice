#include<stdio.h>
#include<stdlib.h>

// Y = X1W1 + X2W2 + X3W3 + X4W4
void main() {
	int n1, n2, n3, n4, w1, w2, w3, w4;
	printf("Enter 4 numbers :\n");
	scanf_s("%d%d%d%d", &n1, &n2, &n3, &n4);
	printf("Enter 4 weights :\n");
	scanf_s("%d%d%d%d", &w1, &w2, &w3, &w4);

	printf("Output Y = %d\n", (n1 * w1 + n2 * w2 + n3 * w3 + n4 * w4));
	system("pause");
}