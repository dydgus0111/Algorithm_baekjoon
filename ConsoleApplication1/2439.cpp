#include <stdio.h>

int main()
{
	int num, i, j, k;
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (k = num - 1; k >= i; k--) {
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");

	}
}