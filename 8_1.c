#include <stdio.h>

int main()
{
	int n, x, a[10], l, max=0;
	scanf("%d", &n);
	for ( int i=0; i<10; i++ ) a[i]=0;	
	for ( int i=0; i<n; i++ )
	{
		scanf("%d", &x);
		while ( x>0 )
		{
			l=x%10;
			a[l]++;
			x/=10;
			if ( a[l]>max ) max=a[l];
		}		
	}	
	printf("%d:", max);
	for ( int i=0; i<10; i++ )
	{
		if ( a[i]==max ) printf(" %d", i);
	}
	return 0;
}
