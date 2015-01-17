#include <stdio.h>

int main()
{
	int n, min=1;
	scanf("%d", &n);
	for ( int i=1; i<n; i++ ) min*=10;
	for ( int i=min; i<min*10; i++ )
	{
		int sum=0, f=i;
		for ( int j=0; j<n; j++ )
		{
			int x=f%10;
			int m=1;
			for ( int k=0; k<n; k++ ) m *= x;
			sum += m;
			f = (f-x)/10;
		}
		if ( sum==i ) printf("%d\n", i);
		
	}
	return 0;
}
//using pow() would be slow
