#include <stdio.h>
int main()
{
	int n;
	printf ("Nhap n =\n");
	scanf ("%d", &n);
	int ary[n];
	for (int i=0; i<n;i++)
	{
		printf ("Nhap phan tu ary[%d]\n",i);
		scanf ("%d",&ary[i]);
	}
	int dem=0, max_dem=0;
	for (int i=0; i<n; i++)
	{
		if (ary[i]>0){
			dem += ary[i];
		}else {			
			dem = 0;
		}
		if (dem>max_dem)
			{
				max_dem=dem;
			}
	}
	printf ("tong so duong lon nhat la %d so\n", max_dem);
	
	return 0;
}
