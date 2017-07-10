#include <stdio.h>

int main()
{
	char a[101] ;
	a[0] = '\0';
	while (fgets(a, 101, stdin)) {
		printf("%s", a);
		a[0] = '\n';
	}
	return 0;
}