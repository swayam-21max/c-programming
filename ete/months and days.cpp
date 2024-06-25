#include<stdio.h>
int main()
//{
//int days ,n;
//scanf("%d",&n);
//
//if (n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
//
//{
//	printf("31 days");
//}
//else if(n==4 || n==6 || n==9 || n==11)
//{
//	printf("30 days");
//}
//else if (n==2)
//{
//   printf("28 or 29 days");
//}
//else
//{
//	printf("enter a valid month");
//}
//
//}

{
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			printf("31 days");
			break;
		case 4:case 6:case 9:case 11:
		    printf("30 days");
		    break;
		case 2:
		    printf("28 or 29  days");	
			break;
		default:
		    printf("invalid");
			break;	
		
	}
}

