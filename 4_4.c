#include <stdio.h>

int main()
{
	int num, n;
	scanf("%d %d", &num, &n);
	int guess, count=0;
	scanf("%d", &guess);
	while ( 1 )
	{
		count++;
		if ( count>n || guess<0 ) 
		{
			printf("Game Over\n"); 
			break;	
		}
		else if ( guess==num )
		{
			if ( count==1 ) printf("Bingo!\n");
			else if ( count<=3 ) printf("Lucky You!\n"); 
			else printf("Good Guess!\n"); 
			break;
		}
		else if ( guess>num ) printf("Too big\n");
		else if ( guess<num ) printf("Too small\n");
		scanf("%d", &guess);
	}
	return 0;
}

