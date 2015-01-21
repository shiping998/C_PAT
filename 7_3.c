#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, s=105000, count=0;
	scanf("%d %d", &m, &n);
	int check[s+1];
	for ( int i=2; i<s; i++ ) check[i]=1;
	for ( int i=2; i<sqrt(s); i++ )
	{
		if ( check[i]==1 ) 
		{
			for ( int j=i; j*i<s; j++ ) check[j*i]=0;
		}
	}
	for ( int i=2; i<s; i++ )	
	{
		if ( check[i]==1 )
		{
			count++;
			if ( count>=m && count<=n ) 
			{
				printf("%d", i);
				if ( (count-m+1)%10==0 ) printf("\n");
				else if ( count==n ) break;
				else printf(" ");
			}
		}
	}
	return 0;
}
