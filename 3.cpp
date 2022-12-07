#include<stdio.h>
main()
{
	int i,n,a[100],sum=0;
	float T;
	
	printf("Enter the value of a");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n============================\n");
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}

	   T=sum/n;
		printf("%f",T);
	
}