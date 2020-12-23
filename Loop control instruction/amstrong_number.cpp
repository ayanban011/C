#include<stdio.h>
int main()
{
	int i,temp,ams=0,t1;
	for(i=1;i<=500;i++)
	{
		//printf("%d ",i);
		temp = i;
		//printf("%d\n",temp);
		while(temp!=0)
		{
		t1 = temp%10;
		//printf("%d\n",temp);
		ams=ams+(t1*t1*t1);
		//printf("%d\n",ams);
		temp = temp/10;
		//printf("%d\n",temp);
		}
		//printf("%d\t",ams);
		if(ams==i)
			printf("%d ",ams);
		ams = 0;
	}
	printf("are amstrong number\n");
	return 0;
}
