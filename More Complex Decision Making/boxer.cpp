#include<stdio.h>
int main()
{
	int w;
	printf("Enter the boxer's weight\n");
	scanf("%d",&w);
	if(w<115)
		printf("Flyweight\n");
	else if(w>=115 && w<=121)
		printf("Bantamweight\n");
	else if(w>=122 && w<=153)
		printf("Featherweight\n");
	else if(w>=154 && w<=189)
		printf("Middleweight\n");
	else if(w>=190)
		printf("Heavyweight\n");
	return 0;
}
