//#include <stdio.h>
//
//int main() {
//    char name[31];
//    int i = 0;
//
//    printf("Enter the name: ");
//    
//    scanf("%c",&name); isme name ka sirf first initial ayega...
//    scanf("%[^\n]", name); isme name ke saare initials ayege 
//
//    printf("%c ", name[0]);  // Print the first initial with a period
//
//    while (name[i] != '\0') {
//        if (name[i] == ' ') {
//            printf("%c ", name[i + 1]);  // Print initials followed by a period
//        }
//        i++;
//    }
//
//    return 0;
//}

// is code me name aayega main name ke initials aur surname asitis
#include <stdio.h>
int main()
{
	char nm[31], i=0, k=0, s;
	printf("Enter the name");
	scanf("%[^\n]", nm);
	while (nm[i]!='\0'){
		if (nm[i]==' '){
		printf("%c. ", nm[k]);
		k=i+1;
	}
		i++;
	}
	while(nm[k]!='\0'){
		printf("%c", nm[k]);
		k++;
	}
}

