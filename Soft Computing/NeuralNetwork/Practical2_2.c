#include<stdio.h>
#include<stdlib.h>

// OR GATE, Y = X1W1 + X2W2 + b
void main() {
	int x1, x2, w1, w2;
	printf("Enter 2 numbers :\n");
	scanf_s("%d%d", &x1, &x2);
	printf("Enter 2 weights :\n");
	scanf_s("%d%d", &w1, &w2);

	printf("Output Y = %d\n", (x1 * w1 + x2 * w2 - (x1 && x2)));
	system("pause");
}