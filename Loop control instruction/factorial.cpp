#include<stdio.h>
int facto(int n)
{
	int f;
	if(n==0 || n==1)
		return 1;
	else
		f = n*facto(n-1);
	return f;		
}
int main()
{
	int i,n,fact=1,ans;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("Factorial for loop: %d\n",fact);
	ans = facto(n);
	printf("Factorial recursion: %d\n",ans);
	return 0;
}
