#include <stdio.h>

int main()
{
	int up, down, gcd=1;
	scanf("%d/%d", &up, &down);
	int upcy=up, downcy=down;
	while ( down!=0 )
	{
		gcd=up%down;
		up=down;
		down=gcd;
	}
	printf("%d/%d\n", upcy/up, downcy/up);
	return 0;
}

// using Euclidean algorithm for greatest common divisor

