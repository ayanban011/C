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
		temp = a[i];
		j = i-1;
		while(temp<a[j]&&j>=0)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] =temp;
	}
	printf("Sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
