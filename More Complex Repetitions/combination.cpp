#include<stdio.h>
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a,b,c,i=1;
	printf("Enter 3 numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	//swap(&a,&b);
	//printf("%d %d\n",a,b);
	for(i=1;i<=3;i++)
	{
		swap(&a,&b);
		printf("%d %d %d\n",a,b,c);
		swap(&b,&c);
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
	
}
