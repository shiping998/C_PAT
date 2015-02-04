#include <stdio.h>

int main()
{
	int l=0;
	char a[81];
	char *p;
	while ( (a[l]=getchar())!='\n' ) l++;
	a[l]='\0';
	for ( ; l>0; l-- )
	{		
		if ( a[l]==' ' )
		{	
			p=a+l;  //point to l
			printf("%s ", p+1);
			*p='\0';   //change the array
		}	
	} 
	printf("%s\n", a);
	return 0;
}
