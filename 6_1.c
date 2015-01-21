#include <stdio.h>

int main()
{
	int n, k, flag=0;
	scanf("%d", &n);
	char x;
	scanf("%c", &x);
	while ( x!='=' )
	{
		scanf("%d", &k);
		if ( x=='+' ) n+=k;
		else if ( x=='-' ) n-=k;
		else if ( x=='*' ) n*=k;
		else if ( x=='/' && k!=0 ) n/=k;
		else flag=1;	
		scanf("%c", &x);
	}
	if ( flag ) printf("ERROR\n");
	else printf("%d\n", n);
	return 0;
}
