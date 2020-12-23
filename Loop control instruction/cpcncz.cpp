#include<stdio.h>
int main()
{
	int ch=1,n,cp=0,cz=0,cn=0;
	while(ch)
	{
		printf("Enter a number\n");
		scanf("%d",&n);
		if(n>0)
			cp+=1;
		else if(n==0)
			cz+=1;
		else
			cn+=1;
		printf("Do you want to continue?\n");
		scanf("%d",&ch);
	}
	printf("%d %d %d",cp,cz,cn);
	return 0;
}
