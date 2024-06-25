#include <stdio.h>

int main(){
	int a[5];
	int i,lar,small,diff;
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	lar=a[0];
	small=a[0];
	for(i=0;i<5;i++)
	{
		if(lar<a[i])
		{
			lar=a[i];
		}
		if(small>a[i])
		{
			small=a[i];
		}
	}
	diff= lar-small;
	printf("%d",diff);
	
}
