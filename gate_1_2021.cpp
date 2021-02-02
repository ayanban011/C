#include<stdio.h>
int main()
{
	int a =5,b,c,d,e;
	d=a;
	b = a-1;
	printf("%d",b);
	c= a >> b;
	printf("%d",c);
	e = a<<c;
	printf("%d\n",e);
	a = a << a >> a-1;
	printf("%d\n",a);
	return 0;
	
}
