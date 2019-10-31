#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float k,cv,dt;
	printf ("Day la chuong trinh kiem tra cac canh cua tam giac va tinh chu vi, dien tich cua no :\nDe nghi nhap cac canh \n");
	printf ("canh a: \n");
	scanf ("%d", &a);
	printf ("canh b: \n");
	scanf ("%d", &b);
	printf ("canh c: \n");
	scanf ("%d", &c);
	
	if (a<(b+c) && b<(a+c) && c<(a+b)){
		printf ("Day la 1 tam giac, dang tinh chu vi va dien tich cua tam giac nay \n");
		cv = a + b + c;
		printf ("Chu vi = %f \n", cv);
		k = cv/2;
		dt = sqrt (k*(k-a)*(k-b)*(k-c));
		printf ("Dien tich = %f \n", dt);
	}else {
		printf ("Day ko phai la tam giac, chuong trinh se ket thuc");
	}
}
