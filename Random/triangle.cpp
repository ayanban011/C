#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter the three sides of the triangles\n");
	scanf("%d %d %d",&s1,&s2,&s3);
	if(s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
	{
		printf("Valid\n");
		if(s1 == s2 && s2 == s3 && s3 == s1)
			printf("Equilateral\n");
		else if(s1==s2 || s2==s3 || s3==s1)
			printf("Isoscales\n");
		else if(s1*s1 + s2*s2 == s3*s3 || s2*s2 + s3*s3 == s1*s1 || s3*s3 + s2*s2 == s1*s1)
			printf("Right angle triangle\n");
	}
	else
		printf("Invalid\n");
	return 0;
}
