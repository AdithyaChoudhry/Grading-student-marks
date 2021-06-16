#include<stdio.h>
main()
{
	int mark;//representing maark as an integer
	printf("enter the marks to get grade:");
	scanf("%d",&mark);//getting input from user
	if(mark<=100&&mark>=85)//using && to satisfy both the given condition
	{
		printf("you got  Grade A");
	}
	else if(mark<=84&&mark>=70)
	{
	    printf("you got  Grade B");
    }
    else if(mark<=69&&mark>=55)
    {
    	printf("you got Grade C");
	}
	else if(mark<=54&&mark>=40)
	{
		printf("you got Grade D");
	}
	else if(mark<39&&mark>=0)
	{
		printf("you got Grade F \n Don't worry\n Try well and get better grade next time");
	}
	else
    {
    	printf("invalid mark");
	}
	return 0;
}
