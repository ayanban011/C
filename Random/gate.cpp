#include<stdio.h>
int main()
{
	int a=0,x,y,z;
	for(x=1;x<31;x++)
	{
		for(y=1;y<31;y++)
		{
			for(z=1;z<31;z++)
			{
				if((x+y+z)%3==0){
				}
			}
			a=a+1;
		}
	}
	printf("%d",a);
	return 0;
}
