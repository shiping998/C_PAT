#include <stdio.h>

int main()
{
	int l=0;
	char a[81];
	char *p;
	while ( (a[l]=getchar())!='\n' ) l++;
	a[l]='\0';
	for ( l--; l>=0; l-- ) printf("%c", a[l]);
	printf("\n");
	return 0;
}	
