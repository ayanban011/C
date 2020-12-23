#include<stdio.h>
void quicksort(int number[100], int first, int last)
{
	int i,j,pivot,temp;
	if(first<last){
		pivot = first;
		i = first;
		j = last;
		while(i<j)
		{
			while(number[i]<=number[pivot] && i<last)
				i++;
			while(number[j]>number[pivot])
				j--;
			if(i<j)
			{
				temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
		temp = number[pivot];
		number[pivot] = number[j];
		number[j] = temp;
		quicksort(number,first,j-1);
		quicksort(number,j+1,last);
	}
}
int main()
{
	int i,j,n,number[100],temp;
	printf("Enter how many numbers there in the array: ");
	scanf("%d",&n);
	printf("Enter the elements in the array: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&number[i]);
	}
	quicksort(number,0,n-1);
	printf("Sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",number[i]);
	}
	return 0;
}
