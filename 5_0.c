#include <stdio.h>

int main()
{
	int n;
	double sum, up=2, down=1, t;
	scanf("%d", &n);
	for ( int i=0; i<n; i++ )
	{
		sum+=up/down;
		t=down;
		down=up;
		up+=t;
	}
	printf("%.2f\n", sum);
	return 0;
}
