#include<stdio.h>
int main()
{
	int i,j,n;
	printf("input table from 1-:");
	scanf("%d",&n);
	printf("table from 1 to %d is:\n",n);
	for (i=1;i<=10;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d X %d = %d    ",j,i,i*j);
		}
		printf("\n");
	}
}
