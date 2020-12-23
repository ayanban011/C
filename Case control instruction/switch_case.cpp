#include<stdio.h>
int main()
{
	int ch=1,i,n,f;
	while(ch==1)
	{
		printf("Enter the divsion of the the student\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				printf("Enter the number of the subjects and number of faiure\n");
				scanf("%d %d",&n,&f);
				if(f>3)
					printf("No grade\n");
				else
					printf("Grade: %d\n",n*5);
				break;
			case 2:
				printf("Enter the number of the subjects and number of faiure\n");
				scanf("%d %d",&n,&f);
				if(f>2)
					printf("No grade\n");
				else
					printf("Grade: %d\n",n*4);
				break;
			case 3:
				printf("Enter the number of the subjects and number of faiure\n");
				scanf("%d %d",&n,&f);
				if(f>1)
					printf("No grade\n");
				else
					printf("Grade: %d\n",n*3);
				break;
			default:
				printf("wrong choice\n");				
		}
		printf("Do you want to continue (1/0)\n");
		scanf("%d",&ch);
	}
	return 0;
}
