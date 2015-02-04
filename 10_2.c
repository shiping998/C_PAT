#include <stdio.h>
#include <string.h>

int main()
{
	int l1=0, l2=0;
	char s1[81], s2[81], t[81]={0};
	char *p;
	while ( (s1[l1]=getchar())!='\n' ) l1++;
	while ( (s2[l2]=getchar())!='\n' ) l2++;
	s1[l1]='\0'; 
	s2[l2]='\0';
	while ( (p=strstr(s1, s2))!=NULL )
	{
		*p='\0';
		strcat(t, s1);   //append str before s2
		strcat(t, p+l2);    //append str after s2
		strcpy(s1, t);    //copy
		t[0]='\0';
	}
	printf("%s\n", s1);
	return 0;
}
