#include <stdio.h>

struct P
{
	char name[11];
	char home[17];
	char cell[17];
	char sex;
	char birth[11];
};

int main()
{
	struct P p[10];
	int m[10];
	int n=0, n2=0;
	scanf("%d", &n);
	for ( int i=0; i<n; ++i )
	{
		scanf("%s %s %c %s %s", p[i].name, p[i].birth, &p[i].sex, p[i].home, p[i].cell);
	}
	scanf("%d", &n2);
	for ( int i=0; i<n2; ++i )
	{
		scanf("%d", &m[i]);
		if ( m[i]>=n || m[i]<0 ) printf("Not Found\n");
		else
		{
			printf("%s %s %s %c %s\n", p[m[i]].name, p[m[i]].home, p[m[i]].cell, p[m[i]].sex, p[m[i]].birth);
		}
	}
	return 0;	
}
