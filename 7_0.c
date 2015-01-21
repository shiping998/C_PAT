#include <stdio.h>

int main()
{
	char x;
	int sum=0, s, len=1;
	do
	{
		scanf("%c", &x);
		if ( x!='\n' ) sum += x-'1'+1;
	} while ( x!='\n' );

	for ( int i=sum; i>10; i/=10 ) len*=10; 
	
	for ( ; len>0; len/=10 )
	{
		s=sum/len;
		sum-=s*len;
		switch (s)
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
		if ( len>1 ) printf(" ");		
	}
	printf("\n");
	return 0;
}
