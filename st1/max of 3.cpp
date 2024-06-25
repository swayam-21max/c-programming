nclude<stdio.h>
int main()
{
    int num ,  max = 0, rem = 0;
    scanf("%d" , &num);
    if(num > 0) {
                rem = num % 10;

                if (rem > max) {
                        max = rem;
                }

                num = num / 10;
        }

        printf("the max digit is %d\n", max);
        return 0;
  
}
