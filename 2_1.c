#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int b = a/30.48;
	int c = (a/30.48-b)*12;
	printf("%d %d\n", b, c);
	return 0;
}
