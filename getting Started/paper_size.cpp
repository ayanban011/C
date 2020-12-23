#include<stdio.h>
void size(int n,int a,int b)
{
	int n1;
	n1=n;
	if(n1==9)
		return;
	else
	{
		if(a>b)
		{
		printf("%d %d mm * %d mm\n",n1,a/2,b);
		size(n1+1,a/2,b);
		}
		else
		{
		printf("%d %d mm * %d mm\n",n1,a,b/2);
		size(n1+1,a,b/2);
		}
		n1=n1+1;
	}
}
int main()
{
	int n =0,a=1189,b=841;
	printf("%d %d mm * %d mm\n",n,a,b);
	size(n+1,a,b);
	return 0;
}
