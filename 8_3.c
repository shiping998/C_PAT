#include <stdio.h>

int main()
{
	int a[10];
	for ( int i=0; i<10; i++ ) scanf("%d", &a[i]);
	int k=1;
	while ( a[k]==0 ) k+=1;
	while ( a[k]!=0 )
	{
		printf("%d", k); 
		a[k]--;
		break;
	}
	k=0;
	while ( a[k]>=0 && k<10 )
	{
		if ( a[k]!=0 ) 
		{
			printf("%d", k);
			a[k]--;
		}
		else k++;
	}
	return 0;
}
