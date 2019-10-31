#include<stdio.h>
int main()
{
	int f0=0;
	int f1=1;
	int f;
	printf ("Day so Fibonacci trong khoang tu 1 den 100 la: \n");
	for (int i=2; i<=100; ++i)	
	{
		f = f0+f1;
		f0= f1;
		f1=f;
		if (f>1 && f<100)
		{
		printf ("%d\n",f);
		}
	}
	return 0;

}

