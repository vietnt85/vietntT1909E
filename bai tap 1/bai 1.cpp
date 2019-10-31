#include <stdio.h>
int main()
{
	int a,b,c;
	printf ("Nhap a: ");
	scanf ("%d", &a);
	printf ("\nNhap b: ");
	scanf ("%d", &b);
	printf ("\nNhap c: ");
	scanf ("%d", &c);
	
	if (a>b && a>c && b>c)
	{
		printf ("\nmax la %d\n", a);
		printf ("min la %d\n", c);
	}else if (a>b && a>c && c>b)
	{
		printf ("\nmax la %d\n", a);
		printf ("min la %d\n", b);
	} else if (b>a && b>c && a>c)
	{
		printf ("\nmax la %d\n", b);
		printf ("min la %d\n", c);
	} else if (b>a && b>c && c>a)
	{
		printf ("\nmax la %d\n", b);
		printf ("min la %d\n", a);
	} else if (c>a && c>b && a>b)
	{
		printf ("\nmax la %d\n", c);
		printf ("min la %d\n", b);
	} else if (c>a && c>b && b>a) 
	{
		printf ("\nmax la %d\n", c);
		printf ("min la %d\n", a);
	} else
	{
		printf ("\nde nghi nhap 3 so khac nhau\n");
		printf ("chuong trinh se dung va khoi dong lai.");
	}
	
	
	
	return 0;
}
