#include<stdio.h>
int main()
{
	int a[100],n,i,min=10000000001,max=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter n numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min = a[i];
		if(a[i]>max)
			max = a[i];
	}
	printf("Maximum = %d\n",max);
	printf("Minimum = %d\n",min);
	return 0;
}
