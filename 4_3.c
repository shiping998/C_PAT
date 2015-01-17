#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int count=0, sum=0, check[b+1];
	for ( int i=2; i<=b; i++ ) check[i]=1;
	for ( int i=2; i<sqrt(b); i++ )
	{
		if ( check[i]==1 )
		{
			for ( int j=i; j*i<=b; j++ ) check[j*i]=0;
		}
	}
	for ( int i=a; i<=b; i++ )
	{	
		if ( check[i]==1 ) 
		{
			count++;
			sum+=i;
		}
	}
	printf("%d %d\n", count, sum);
	return 0;
}

