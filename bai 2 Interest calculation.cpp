#include <stdio.h>
int main()
{
float capital_sum, year, rate, interest;


	printf("Enter Capital Sum\n");
	scanf("%f", &capital_sum);
	
	printf("Enter Rate of Interest\n ");
	scanf("%f", &rate); 
	
	printf("Enter No of years\n ");
	scanf("%f", &year);
		
	for (int i = 1; i<= year;i++)
	{
	
			interest = (capital_sum * rate * year) / 100;
			capital_sum += interest;
			printf("year%d\t, interest%lf,capital_sum:%lf\n");
	}
	return 0;
	
}
