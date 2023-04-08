#include<stdio.h>
int fact(int num)
{
	if(num<=1)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
main()
{
	int a, factorial;
	printf("Enter value:");
	scanf("%d",&a);
	factorial=fact(a);
	printf("Factorial of %d! = %d",a,factorial);
	
	
}
