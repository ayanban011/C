#include<stdio.h>
int main()
{
	int r,s,a,min,min1,flag =0;
	printf("Enter Ram,Shyam,Ajay's age: ");
	scanf("%d %d %d",&r,&s,&a);
	min = r;
	if(s>a)
	{
		min1 = a;
		flag = 0;
		
}
	else
	{
		min1 = s;
		flag = 1;
	}
	if(min>min1 && flag ==1)
		printf("Shyam");
	else if(min>min1 && flag ==0)
		printf("Ajay");
	else
		printf("Ram");
	return 0;
}
