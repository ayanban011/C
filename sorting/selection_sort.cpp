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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i]= a[j];
				a[j] = temp;
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
