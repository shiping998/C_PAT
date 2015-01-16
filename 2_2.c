#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int hh=a/100;
	int mm=a%100+b;
	while ( mm>59 )
	{
		hh += 1;
		mm -=60;
	}
	while ( mm<0 )
	{
		hh -= 1;
		mm += 60;
	}
	printf("%d%02d\n", hh, mm);
	return 0;
}
