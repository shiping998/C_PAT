#include <stdio.h>

int main()
{
	double a=0.0, b=0.0, c=0.0, d=0.0;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	double x=a+c, y=b+d;
	if ( x>=-0.05 && x<0 ) x+=0.05;
	if ( y>=-0.05 && y<0 ) y+=0.05;
	printf("(%.1f, %.1f)\n", x, y);
	return 0;
}	
