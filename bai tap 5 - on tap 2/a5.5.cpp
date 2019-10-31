#include <stdio.h>
int main() 
{
	int n, dem = 0;
	printf ("Nhap n: ");
	scanf ("%d", &n);
	printf ("cac so nguyen to nho hon n la:\t");
	
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i%j==0)
			{
				dem++;
			}
		}
		if (dem==2)
		{
			
			printf ("%d " ,i);
			
		}
		dem=0;
	}
	
	 return 0;
}
