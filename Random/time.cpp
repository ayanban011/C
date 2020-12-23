#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<24;i++)
	{
		if(i<12)
		{
			if(i<10)
				printf("%d AM, Morning\n",i);
			else
				printf("%d AM, Noon\n",i);
		}
		else
		{
			if(i<16)
				printf("%d PM, Afternoon\n",i);
			else if(i<20)
				printf("%d PM, Evening\n",i);
			else
				printf("%d PM, Night\n",i);
		}
	}
	return 0;
}
