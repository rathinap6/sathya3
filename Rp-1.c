#include <stdio.h>
void main() 
{
    int n,a[10],j,i,c=0;
    printf("Enter the number of integers:");
    scanf("%d",&n);
    printf("Enter the integers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               c=a[i];
               a[i]=a[j];
               a[j]=c;
           }
       }
    }
       for(i=0;i<n;i++)
       {
           printf("%d  ",a[i]);
       }
}
