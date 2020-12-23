#include<stdio.h>
#include<math.h>
int main()
{
	int t,i,n,p=1;
    int q=1,j;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
			if(n%2==0)
			q=pow(10,n/2);
			printf("%d %d\n",p,q);
	}
	return 0;
}
