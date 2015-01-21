#include <stdio.h>

int main()
{
	int n, b, s, g;
	scanf("%d", &n);
	if ( n>=100 )
	{
		b=n/100;
		n=n%100;
		for ( int i=0; i<b; i++ ) printf("B");
	}
	if ( n>=10 )
	{
		s=n/10;
		n=n%10;
		for ( int i=0; i<s; i++ ) printf("S");
	}
	for ( int i=0; i<n; i++ ) printf("%d", i+1);

	return 0;
}
