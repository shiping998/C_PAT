#include <stdio.h>

int main()
{
	int n;
	double one, two;
	char c;
	scanf("%lf %d %c %lf", &one, &n, &c, &two);
	printf("%c %d %.2f %.2f\n", c, n, one, two);
	return 0;
}
