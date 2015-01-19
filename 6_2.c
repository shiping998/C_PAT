#include <stdio.h>

int main()
{
	char c;
	scanf("%c", &c);
	while ( c!='#' )
	{
		if ( c>='a' && c<='z' ) c-=32;
		else if ( c>='A' && c<='Z' ) c+=32;
		printf("%c", c);
		scanf("%c", &c);
	}
	printf("\n");
	return 0;
}
