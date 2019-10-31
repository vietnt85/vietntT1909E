#include <stdio.h>
int main()
{
	int A,B;
	printf ("Nhap so thu nhat: \n", A);
	scanf ("%d", &A);
	printf ("Nhap so thu hai: \n", B);
	scanf ("%d", &B);
	
	if (A>B)
	{
		printf ("%d la so lon nhat", A);
	}else {
		printf ("%d la so lon nhat", B);
	}
}
