#include <stdio.h>
int main () 
{
	int n, sum = 0;
	printf ("Nhap vao n: ");
	scanf ("%d", &n);
	for (int i = 1; i <= n/2 ; i++)
	{
		if (n%i==0)
		{
			sum+=i;
		}
	} if (sum==n)
	{
		printf ("%d la so hoan hao", n);
	}else 
	{
		printf ("%d khong phai so hoan hao", n);
	}
	
	return 0;
}
