#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int c = n%5;
	if ( c==0 || c==4 ) printf("Drying in day %d\n", n);
	else printf("Fishing in day %d\n", n);
	return 0;
}
