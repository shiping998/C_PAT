#include <stdio.h>

int main()
{
	int a, n;
	scanf("%d %d", &a, &n);	
	int x=a, sum;
	for ( int i=0; i<n; i++ )
	{
		sum+=x;
		x=x*10+a;
	}
	printf("%d\n", sum);
	return 0;
}
