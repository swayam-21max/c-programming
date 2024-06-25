#include<stdio.h>
int main()
{
	FILE *fptr;
	char str[100];
		fptr =fopen("C:/Users/swmkt/file1.txt","w");
		fprintf(fptr,"some text");
		fclose(fptr);
	/*fptr =fopen("C:\Users\swmkt\filing.txt","r");
	while(fgets(str , 100 , fptr))
	{
		printf("%s",str);
	}
	fclose(fptr);*/
	
}
