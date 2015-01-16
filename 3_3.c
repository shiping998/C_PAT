#include <stdio.h>

int main()
{
	int h, m;
	scanf("%d:%d", &h, &m);
	if ( h==12 ) printf("%d:%d PM\n", h, m);
	else if ( h>12 ) printf("%d:%d PM\n", h-12, m);
	else printf("%d:%d AM\n", h, m);
	return 0;
}
