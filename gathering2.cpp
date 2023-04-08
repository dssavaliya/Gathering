#include<stdio.h>
int sum(int arr[])
{
	
    int i,Sum=0;
	for(i=0;arr[i]!=NULL;i++)
	{
		Sum=Sum+arr[i];
	}
	printf("Addition of Array = %d",Sum);
	return Sum;
}
main()
{
int a[100],i,n;
	printf("Enter value of N : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	//printf("\nSum of Array=%d", sum(a));
	sum(a);

}
