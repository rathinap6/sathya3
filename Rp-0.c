#include <stdio.h>
void main() 
{
    
	int n,i,a[n],Mini;
	printf("Enter the number of integers:");
	scanf("%d",&n);
	printf("Enter the integers:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	Mini=a[0];
	for(i=0;i<n;i++)
	{
	if(a[0]>a[i])
	Mini=a[i];
	}
	printf("The minmum value is %d",Mini);
	return 0;
}
