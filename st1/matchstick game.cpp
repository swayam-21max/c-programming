#include<stdio.h>
int main()
{
	int user,comp,tm=21;
	while(1)
	{
		printf("tm is %d",tm);
		printf("tm ");
		scanf("%d",&user);
		if(user<1|| user>4)
		{
			printf("chose from 1 to 4");
			continue;
		}
		comp=5-user;
		printf("computer pick %d",comp);
		tm-tm-5;
	
	if(tm==1)
	{
		printf("lost user");
		break;
	}
	else
	{
		continue;
	}
}
}
