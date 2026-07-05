#include<stdio.h>
main()
{
	char name[50];
	int hours;
	int i;
	int total;
	printf("********OVERTIME PAYMENT CALCULATION***********\n");
	for(i=0;i<=10;i++)
	{
	
		printf("Enter Employee name\n");
		scanf("%s",name);
		printf("Enter total working hours\n");
		scanf("%d",&hours);
		
		if(hours > 40)
		{
			total=(hours-40)*120;
			
		}
		else
		{
			total=0;
		}
		
		printf("Overtime payment is %d\n",total);
	}







}

