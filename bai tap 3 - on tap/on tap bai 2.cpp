#include <stdio.h>
int main()
{
	int n;
	printf ("Nhap 1 so bat ki: \n");
	scanf ("%d", &n);
	
	if (n>0){
		printf ("So vua nhap ( %d ) la so duong", n);
	}else {
		if (n==0){
			printf ("so vua nhap la so 0", n);
		}else {
			printf ("so vua nhap ( %d ) la so am", n);
		}
	}
}
