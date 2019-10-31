#include <stdio.h>
int main()
{
	int array [10];
	int i, S;
	float N;
	
	S = N = 0;
	
	for (i = 0; i < 10; ++i)
	{   
		printf("\nNhap so thu %d cua mang 10 so: ",i+1);
		scanf("%d", &array[i]);
		S = S + array [i];
		
	}
		
	N = (float)S/i;
	
	printf ("gia tri trung binh cua mang vua nhap la %.2f\n", N);
	
	return 0;
}
