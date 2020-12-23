#include<stdio.h>
void prime_factor(int n)
{
	int i,j,isPrime;
    for(i=2; i<=n; i++)
    {
        /* Check 'i' for factor of num */
        if(n%i==0)
        {
            /* Check 'i' for Prime */
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            /* If 'i' is Prime number and factor of num */
            if(isPrime==1)
            {
                printf("%d, ", i);
            }
        }
    }
}
int main()
{
	int n;
	printf("Enter a decimal number: ");
	scanf("%d",&n);
	printf("It's prime factors: ");
	prime_factor(n);
	return 0;
}
