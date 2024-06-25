#include<stdio.h>
int main()
{
	int i,n;
	float sum=0;	
	printf("enter number of terms");
	scanf("%d",&n);
	printf("\n\n");
	for (i=1;i<=n;i++)
	{
		if(i<n)
		{
			printf("1/%d+ ",i);
			sum=sum+1/float(i);
		}
		if (i == n)
		{
            printf("1/%d ", i);      
            sum+= 1 / (float)i;       
        }
        printf("\nSum of Series upto %d terms : %f \n", n, sum);

		
	}
}
