#include<stdio.h>
int main()
{
	int r,c;
	printf("enter rows and columns");
	scanf("%d%d",&r,&c);
	int mat[r][c];
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			scanf("%d",& mat[i][j]);
		}
	}
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
}
