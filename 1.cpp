#include<stdio.h>
main()
{
	int a[100];
	
	int i,n;
	
	printf("Enter the value of a");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n===============================\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}