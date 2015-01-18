#include <stdio.h>

int main()
{
	int n, len=1, x;
	scanf("%d", &n);
	if ( n<0 ) 
	{
		printf("fu ");
		n = -n;
	}
	for ( int i=n; i>10; i/=10 ) len*=10; //get length
	while (n>=0)
	{
		x=n/len;
		switch (x)
		{
			case 0: printf("ling"); break;
			case 1: printf("yi"); break;
			case 2: printf("er"); break;
			case 3: printf("san"); break;
			case 4: printf("si"); break;
			case 5: printf("wu"); break;
			case 6: printf("liu"); break;
			case 7: printf("qi"); break;
			case 8: printf("ba"); break;
			case 9: printf("jiu"); break;
		}
		if ( len<10 ) break;
		printf(" ");
		n-=x*len;
		len/=10;
	}
	printf("\n");
	return 0;
}


