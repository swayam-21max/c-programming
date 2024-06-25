#include <stdio.h>
//int main(){
//  int t[ ][ ] = {
//    5,6,
//    10,11
//  } ;
//}



// DISPLAY 10 NUMBERS
//int main()
//{
//	int a[10],num,i;
//	for (i=0;i<10;i++)
//	{
//		printf("enter any number :");
//		scanf("%d",&a[i]);
//	}
//	printf("the numbers are");
//	for (i=0;i<10;i++)
//	{
//		printf("%d",a[i]);
//	}
//	
//}


//DISPLAY NUMBERS TYPE

//int main()
//{
//	int z[20],num,i;
//	int p=0;
//	int n=0;
//	int o=0;
//	int e=0;
//	int zero=0;
//	for(i=0;i<20;i++)
//	{
//		printf("enter any number");
//		
//		scanf("%d",&z[i]);
//		if(z[i]>0)
//		{
//			p++;
//		}
//		else if(z[i]<0)
//		{
//			n++;
//		}
//		else
//		{
//			zero++;
//		}
//		 if(z[i]%2==0)
//		{
//			e++;
//		}
//		else 
//		{
//			o++;
//		}
//		printf("p=%d n=%d zero=%d e=%d o=%d",p,n,zero,e,o);
//	}
//	
//}



//ELE COPY REV ORDER

//int main()
//
//{
//	int a[10],b[10],i;
//	for (i=0;i<10;i++)
//	{
//		printf("Enter any number:\n");
//		scanf("%d",&a[i]);
//	}
//	int j=0;
//	for (i=9;i>=0;i--)
//	{
//		b[i]=a[j];
//		j++;
//	}
//	for (i=0;i<10;i++)
//	{
//		printf("%d\n",b[i]);
//	}
//}
	
//SUM OF ALL ELEMENTS IN A ARRAY

//int main()
//{  
//	int a[10],i,sum=0;
//	int n= sizeof(a)/sizeof(a[0]);
//	for (i=0;i<10;i++)
//	{
//		printf("enter numbers");
//		scanf("%d",&a[i]);
//	}
//	for (i=0;i<10;i++)
//	{
//	sum =sum+a[i];
//	}
//	printf("%d",sum);
//}



//PRODUCT OF ALL NUMBERS
//int main()
//{  
//	int a[10],i,sum=0;
//	int n= sizeof(a)/sizeof(a[0]);
//	for (i=0;i<10;i++)
//	{
//		printf("enter numbers");
//		scanf("%d",&a[i]);
//	}
//	for (i=0;i<10;i++)
//	{
//	sum =sum*a[i];
//	}
//	printf("%d",sum);
//}

//SMALLEST IN ARRAY 

//int main()
//{
//	int a[5],i;
//	for (i=0;i<5;i++)
//	{
//		printf("enter number");
//		scanf("%d",&a[i]);
//	}
//	int small=a[0];
//		for (i=0;i<5;i++)
//		{
//			if(a[i]<small)
//			{
//				small=a[i];
//			
//			}
//		}
//		printf("%d",small);
//}


//PROGRAM TO LARGEST SMALLEST
//int main()
//{
//	int a[10],largest=a[0],i;
//	
//	for (i=0;i<10;i++)
//{
//		printf("enter numbers\n");
//		scanf("%d",&a[i]);
//	}
//	int smallest=a[0];
//		for (i=0;i<10;i++)
//		{
//			if(a[i]>largest)
//			{
//				largest=a[i];
//			}
//			if(a[i]<smallest)
//			{
//				smallest=a[i];
//			}
//			
//		}
//		printf("the largest is %d and the smallest is %d\n",largest ,smallest);
//	}


//SUM AVG LAR SMALL

//int main()
//{
//
//	int a[3],avg=0,lar=a[0],sum=0,i;
//		for (i=0;i<3;i++)
//		{
//			printf("Enter number :");
//			scanf("%d",&a[i]);
//		}
//		int small=a[0];
//			for (i=0;i<3;i++)
//			{
//				avg=a[i]/3;
//				avg++;
//				
//				sum=sum+a[i];
//				
//				if(a[i]>lar)
//	{
//				lar=a[i];
//			}
//			if(a[i]<small)
//		{
//				small=a[i];
//			}
//			}
//			printf("the average is %d and the sum is %d and the largest number is %d and thr smallest number is%d\n",avg,sum,lar,small);
//}
//
//int main()
//{
//	int a[12],read=1,i=5,j=5;
//	for (i=0;i<12/2;i++)
//	{
//		printf("enter number");
//		scanf("%d",&a[i]);
//	}
//		for (i=0;i<12/2;i++)
//		{
//			if(a[i]!=a[j])
//			{
//				read=0;
//				break;
//			}
//			else
//			{
//				j--;
//			}
//		}
//		printf("%d",read);
//	
//}

//LEVEL 3
//
//int main()
//{
//	int a[10];
//	int b[6],i;
//
//	int j=0;
//	for(i=0;i<5;i++)
//	{
//		printf("enter numbers ");
//		scanf("%d",&a[i]);
//		
//	}
//		int high=a[0];
//	int sec_high=a[0];
//	for(i=0;i<5;i++)
//	{
//		if(a[i]>high)
//		{
//			high=a[i];
//			j=i;
//		}
//		for(i=0;i<5;i++)
//		{
//			if(a[i]<high && a[i]>sec_high)
//			{
//				sec_high=a[i];
//			}
//			
//		}
//		for(i=0;i<j;i++)
//		{
//			b[i]=a[i];
//		}
//		b[j]=sec_high;
//		b[j-1]=high-sec_high;
//		for(i=j+2;i<6;i++)
//		{
//			printf("%d",b[i]);
//		}
//	}
//
//}

//CIRCULARLY RIGTHT

int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int t=a[9];
	for (int i=9;i>=0;i--)
	{
		a[i]=a[i-1];
		
	}
	a[0]=t;
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
		}	
}

//largest sorting
//int main()
//{
//	int a[10]={1,34,23,24,35,12,26,65,66,45};
//	int t,i,j;
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<10;j++)
//		{
//		if (a[i]>a[j])
//		{
//			t=a[i];
//			a[i]=a[j];
//			a[j]=t;
//			}	
//		}
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//}
