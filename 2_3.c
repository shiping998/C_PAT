#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int d = a%10*100 + a%100-a%10 + a/100;
	printf("%d\n", d);
	return 0;
}
