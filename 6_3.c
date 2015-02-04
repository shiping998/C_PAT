#include <stdio.h>
#include <string.h>

int main()
{
	int l=0, n=0;
	char a[1001];
	char *p;
	while ( (a[l]=getchar())!='\n' ) l++;
	a[l]='\0';
	p=strtok(a, " .");    //split
	while ( p!=NULL )
	{ 
		n=strlen(p);
		p=strtok(NULL, " .");
		if ( p!=NULL ) printf("%d ", n);
		else printf("%d\n", n);
	}
	return 0;
}	
