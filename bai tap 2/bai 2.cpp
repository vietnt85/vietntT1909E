#include <stdio.h>
int main()
{
    int n,m;
	printf ("Nhap 1 so nguyen duong: ");
	scanf ("%d", &n);
	int rev = 0;
	while (n>0){
		m = n % 10;
		rev = rev*10 + m;
		n = n/10;
	}
	printf ("so nghich dao cua so vua nhap la: %d", rev);
	
	return 0;	
}
