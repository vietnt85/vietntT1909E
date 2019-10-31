#include <stdio.h>
int main()
{
	int a[20];
	for (int i = 0; i < 20; i++)
	{
		printf ("\nNhap vao phan tu thu %d: ", i+1);
		scanf ("%d", &a[i]);		
	} 
	
	printf("So le trong mang vua nhap la: \n");
	for (int i = 0; i < 20; i++)
	{
		if (a[i]%2!=0)
		{
			printf ("%d\t", a[i]);
		}
	}	
	
	return 0;
}
