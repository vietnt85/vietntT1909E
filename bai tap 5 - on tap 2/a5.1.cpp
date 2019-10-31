#include <stdio.h>
int main()
{
	float S = 0;
	int n;
	printf ("Nhap 1 so nguyen n: ");
	scanf ("%d", &n);
	while (n <= 0)
	{
		printf ("so nhap vao ko dung, de nghi nhap lai: ");
		scanf ("%d", &n);
	}
	
	for (int i = 1 ; i <= n ; ++i)
	{
		S = S + 1/(float)i;
	}
	
	printf ("S = %f", S);
	
	return 0;
}
