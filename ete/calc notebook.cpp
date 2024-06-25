#include<stdio.h>

int main()
{
    int choice, num, i;
    while(1)
    {
        printf("\n1. Factorial of a number\n2. Prime or not\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                int fact = 1;
                printf("Enter an integer: ");
                scanf("%d", &num);
                for(i = 1; i <= num; i++)
                {
                    fact = fact * i;
                }
                printf("Factorial is %d\n", fact);
                break;
            }

            case 2:
            {
                int flag = 0;
                printf("Enter an integer: ");
                scanf("%d", &num);
                for(i = 2; i <= num / 2; i++)
                {
                    if(num % i == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    printf("%d is prime\n", num);
                else
                    printf("%d is not prime\n", num);
                break;
            }

            case 3:
                printf("Exit\n");
                return 0;

            default:
                printf("Invalid choice\n");
                break;
        }
    }
}
