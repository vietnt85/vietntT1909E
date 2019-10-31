#include <stdio.h>
int main()
{
	int a,b,c;
	printf ("Day la chuong trinh kiem tra 3 so a,b,c co phai la 3 canh cua 1 tam giac \nDe nghi: \n");
	 printf ("Nhap a: \n");
	 scanf ("%d", &a);
	 printf ("Nhap b: \n");
	 scanf ("%d", &b);
	 printf ("Nhap c: \n");
	 scanf ("%d", &c);
	
	while (a >= b + c || b >= a + c || c >= a + b)
	{
		printf ("\n3 so vua nhap ko phai 3 canh cua tam giac, de nghi nhap lai: \n");
		printf ("Nhap a: \n");
	    scanf ("%d", &a);
	    printf ("Nhap b: \n");
	    scanf ("%d", &b);
	    printf ("Nhap c: \n");
	    scanf ("%d", &c);
		
	} 
	
	printf ("\nDay la 3 canh cua tam giac ABC \n");
	
	return 0;
}
