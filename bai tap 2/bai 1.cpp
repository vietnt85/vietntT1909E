#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	
	printf("Nhap so thu nhat: \n");
	scanf("%d", &a);
	printf("Nhap so thu hai: \n");
	scanf("%d", &b);
	printf("Nhap so thu ba: \n");
	scanf("%d", &c);
	
	if (a>b)
	{
		if (b>c){
			printf("max %d\n", a);
		    printf("min %d\n", c);
		}else {
			if(a>c){
				printf("max %d\n", a);
				printf("min %d\n", b);
			}else {
				printf("max %d\n", c);
				printf("min %d\n", b);
			}
		}
	}else{
		if (a>c){
			printf("max %d\n", b);
			printf("min %d\n", c);
		}else {
			if (b>c){
				printf("max %d\n", b);
				printf("min %d\n", a);
			}else {
				printf("max %d\n", c);
				printf("min %d\n", a);
			}
		}
	}
	
	return 0;
	
}
