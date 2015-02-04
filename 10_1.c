#include <stdio.h>
#include <string.h>

int main()
{
	int l=0;
	char a[81];
	char *p, c;
	while ( (a[l]=getchar())!='\n' ) l++;
	a[l]='\0';
	scanf("%c", &c);
	p=strchr(a, c);
	if ( p ) printf("%s\n", p);
	else printf("Not found\n");
	return 0;
}
