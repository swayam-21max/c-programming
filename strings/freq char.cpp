#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char str[100];
   int c,ch,i;
   printf("this program is for checking the frequency of the characters\n\n\n\n :");
   printf("\n input the string");
   fgets(str,sizeof str,stdin);
   i=strlen(str);
   for (i=0;i<=c-3;i++)
   {
   	int t,h,e,space;
   	t = (str[i] == 't' || str[i] == 'T');
        h = (str[i + 1] == 'h' || str[i + 1] == 'H');
        e = (str[i + 2] == 'e' || str[i + 2] == 'E');
        spc = (str[i + 3] == ' ' || str[i + 3] == '\0');
        if ((t && h && e && spc) == 1)
            freq++;
    }
    printf("The frequency of the word \'the\' is : %d\n\n", freq); 
        
   }
