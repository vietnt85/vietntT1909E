#include <stdio.h>
int main()
{
	int n, N = 1;
	printf ("nhap so nguyen n: ");
	scanf ("%d", &n);
	
	while ( n <= 0)
	{
		printf ("Sai, nhap lai n: ");
		scanf ("%d", &n);
	}
	
	for (int i = 1 ; i <= n ; i++)
	{
		N = N*i;
	}
	printf ("giai thua cua n la : %d ", N);
	
	return 0;
}
