#include<stdio.h>
int main()
{
	char c;
	int ascii;
	printf("Enter the characters\n");
	scanf("%c",&c);
	ascii = c;
	if(ascii>=65 && ascii<=90)
		printf("Capital Letters\n");
	else if(ascii>=97 && ascii<=122)
		printf("Small Letters\n");
	else if(ascii>=48 && ascii<=57)
		printf("Numbers\n");
	else if((ascii>=0 && ascii<=47) || (ascii>=58 && ascii<=64) || (ascii>=91 && ascii<=96) || (ascii>=123 && ascii<=127))
		printf("Special Symbols\n");
	return 0;
}
