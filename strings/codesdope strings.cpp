#include<stdio.h>
#include<string.h>
int main()

//CHAR NAME IN DIFFERENT LINES
//
//{
//	char name[20];
//	int i;
//	printf("Enter your name");
//	scanf("%s",name);
//	for(i=0;i<strlen(name);i++)
//	{
//		printf("%c\n",name[i]);
//	}
//}

//I LOVE CANDIES
//
//{
//	char name[20];
//	int i;
//	char t[20];
//	printf("enter the text you want to display");
//	scanf("%s",name);
//	puts(name);
//}
//
//
//{
//	char s1[10];
//	char s2[20];
//	char s3[30];
//	int i,j,present=0;
//	printf("Enter the character you wanna search for");
//	scanf("%s",s1);
//	printf("Enter the string you wanna search for");
//
//	scanf("%s",s2);
//	for(i=0;i<strlen(s2)-strlen(s1)+1;i++)
//	{
//	for(j=0;j<strlen(s1);j++)
//	{
//		s3[j]=s2[j+i];
//		
//	}
//	if(strcmp(s1,s3)==0)
//	{
//		present=1;
//		break;
//		}
//			}
//			printf("%d",present);
//			
//	
//}

// name sort 
// {
//    int i, j, n = 10;
//    char str[10][100] = {"John", "Alice", "Bob", "Eve", "Mike", "Sarah", "Tom", "Lily", "Peter", "Rachel"};
//    char s[100];
//
//    // Sorting the array of strings
//    for(i=0; i<n; i++) {
//        for(j=i+1; j<n; j++) {
//            if(strcmp(str[i], str[j]) > 0) {
//                strcpy(s, str[i]);
//                strcpy(str[i], str[j]);
//                strcpy(str[j], s);
//            }
//        }
//    }
//
//    // Printing the sorted array
//    printf("The sorted order of names is:\n");
//    for(i=0; i<n; i++) {
//        printf("%s\n", str[i]);
//    }
//
//    return 0;
//}

//ANAGARMS

//{
//	char s1[]="laka";
//	char s2[]="kala";
//	int i,j;
//	int anagram=1;
//	if(strlen(s1)!=strlen(s2))
//	{
//		anagram=0;
//	}
//	else
//	{
//		for(i=0;i<strlen(s1);i++)
//		{
//			int found=0;
//			for(j=0;i<strlen(s2);j++)
//			{
//				if(s1[i]==s2[j])
//				{
//					s2[j]=' ';
//					found=1;
//					break;
//				}
//			}
//			if(found==0)
//			{
//				anagram=0;
//				break;
//			}
//		}
//	}
//	printf("%d\n",anagram);
//}



