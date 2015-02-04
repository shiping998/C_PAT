#include <stdio.h>

int main()
{
	int n, l=0;
	char a[101];
	char *p;
	while ( (a[l]=getchar())!='\n' ) l++;
	a[l]='\0';
	scanf("%d", &n);
	while ( n>l ) n-=l;
	printf("%s", a+n); 
	for ( int i=0; i<n; i++ ) printf("%c", a[i]);
	printf("\n");
	return 0;
}	
