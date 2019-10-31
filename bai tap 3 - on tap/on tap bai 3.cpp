#include <stdio.h>
int main()
{
	int x,y,rev;
	printf ("Nhap so thu nhat: \n");
	scanf ("%d", &x);
	printf ("Nhap so thu hai: \n");
	scanf ("%d", &y);
	
	rev = x;
	x = y;
	y = rev;
	
	printf ("gia tri hoan doi cua 2 so vua nhap la : %d va %d", x,y);
}
