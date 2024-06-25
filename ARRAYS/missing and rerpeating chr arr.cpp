#include<stdio.h>
void print(int arr[], int size)
{
	int i;
	printf("this is the program for taking out the reoeatin elemeenta in an array:");
	printf("\n the repeating element is :");
	for (i=0;i<size ;i++)
	{
		if(arr[abs(arr[i])-1]>0)
		{
			arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
		}
		else 
		{
			printf("%d ",abs(arr[i]);
		}
		pritnf("\n the repaeating element is ")
		for (i=0;i<size ;i++)
		{
			if (arr[i]>0)
			{
				printf("%d",i+1);
			}
		}
	}
}
int main()
{   
	int arr[5]={3,4,5,5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	print(arr,n);
	return 0;
}
