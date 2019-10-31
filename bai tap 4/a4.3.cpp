#include <stdio.h>
int main()
{
	int a1 = 1;
	int a2 = 1;
	int a;
	
	for (int i = 3; i <= 20 ; i++)
	{
		a = a1 + a2;
		a1 = a2;
		a2 = a;
			
	}
	
	printf ("So Fibonacci thu 20 la: %d \n", a);
	
	
	return 0;
}
