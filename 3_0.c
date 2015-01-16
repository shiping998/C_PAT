#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if ( n>60 ) printf("Speed: %d - Speeding\n", n);
	else printf("Speed: %d - OK\n", n);
	return 0;
}
