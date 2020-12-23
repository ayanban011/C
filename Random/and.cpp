#include<stdio.h>
#include<math.h>
#define BITS 32
int main()
{
	int a[100001],t,n,q,l[100001],r[100001],i,j,k,o,m,p,ans,count=0;
	float fvar;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d%d",&n,&q);
		for(j=1;j<=n;j++)
		scanf("%d",&a[j]);
		for(k=1;k<=q;k++)
		scanf("%d%d",&l[k],&r[k]);
		for(k=1;k<=q;k++)
		{
			    for (int o = 0; o < BITS; i++) {
        int countSetBits = 0;
 
        // iterating array element
        for (int m = l[k]; m <= r[k]; j++) {
 
            // Counting the set bit of array in
            // ith position
            if (a[m] & (1 << i))
                countSetBits++;
        }
 
        // counting subset which produce sum when
        // particular bit position is set.
        int subset = (1 << countSetBits) - 1;
 
        // multiplying every position subset with 2^i
        // to count the sum.
        subset = (subset * (1 << i));
 
        printf("%d\n",subset);

			}
			}

}
	return 0;
}

 

