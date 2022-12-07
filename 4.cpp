#include<stdio.h>
main()
{
	int i,n,a[100],b[100],c[100],sum;
	
	printf("Enter the value of n");
	scanf("%d",&n);
	
	for(i=0,i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	{
		printf("%d",sum);
	}
}