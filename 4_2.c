#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for ( int i=1; i<n+1; i++ ) // i is 1st number, j is 2nd number
	{
		for ( int j=1; j<n+1; j++ )
		{
			if ( j<=i ) printf("%d*%d=%d  ", j, i, j*i);
			if ( j*i<10) printf(" ");
			if ( j==i ) 
			{
				printf("\n");
				break;
			}
		}
	}
	return 0;
}

/*
oh my, this should like this without "check for space"..
1*1=1   check for space
1*2=2   2*2=4   check for space
1*3=3   2*3=6   3*3=9   check for space
1*4=4   2*4=8   3*4=12  4*4=16  check for space
1*5=5   2*5=10  3*5=15  4*5=20  5*5=25  check for space
1*6=6   2*6=12  3*6=18  4*6=24  5*6=30  6*6=36  check for space
1*7=7   2*7=14  3*7=21  4*7=28  5*7=35  6*7=42  7*7=49  check for space
1*8=8   2*8=16  3*8=24  4*8=32  5*8=40  6*8=48  7*8=56  8*8=64  check for space
1*9=9   2*9=18  3*9=27  4*9=36  5*9=45  6*9=54  7*9=63  8*9=72  9*9=81  check for space
*/
