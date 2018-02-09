#include <stdio.h>
void main() 
{
	int a[10];
	int n,i,j,b;
	float medium;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
	if(n%2==0)
	{
		medium=(a[n/2]+a[(n-1)/2])/2;
	}
	else
	{
		medium=a[n/2];
	}
	printf("The medium of the given set of elements is %f",medium);
	return 0;
}
