#include <stdio.h>
#include <math.h>
int main()
{
     float a,b,c,D;
     printf ("Day la chuong trinh tinh nghiem cua phuong trinh a^2 + bx + c= 0 \nDe nghi nhap: \n");
     printf ("So a: \n");
     scanf ("%f", &a);
     printf ("So b: \n");
     scanf ("%f", &b);
     printf ("So c: \n");
     scanf ("%f", &c);
     
     if (a==0){
     	if (b==0){
     		if (c==0){
     			printf ("Phuong trinh co vo so nghiem");
			 }else {
			 	printf ("Phuong trinh vo nghiem");
			 }
		 } else {
		 	printf ("Phuong trinh co 1 nghiem duy nhat la: x = %f", -c/b);
		 }
	 }else {
	 	 D = b*b -4*a*c;
	 	 if (D<0){
	 	 	printf("Phuong trinh vo nghiem");
		  }else {
		  	if (D==0){
		  		printf ("Phuong trinh co nghiem kep la x1 = x2 = %f", -b/(2*a));
			  }else {
			  	printf ("Phuong trinh co 2 nghiem phan biet lan luot la: \n");
			  	printf ("x1 = %f \nx2 = %f \n", (-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
			  }
		  }
	 }
}
