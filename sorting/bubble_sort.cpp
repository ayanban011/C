#include<stdio.h>
int main()
{
	int i,j,n,a[100],temp;
	printf("Enter how many numbers there in the array: ");
	scanf("%d",&n);
	printf("Enter the elements in the array: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]= a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("Sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
