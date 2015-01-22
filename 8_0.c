#include <stdio.h>

int main()
{
	int n, x, a, flag=1;
	scanf("%d %d", &n, &x);
	for ( int i=0; i<n; i++ )
	{
		scanf("%d", &a);
		if ( a==x ) 
		{
			printf("%d\n", i);
			flag=0;
			break;
		}
	}
	if ( flag ) printf("Not Found\n");
	return 0;
}
