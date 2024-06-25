#include<Stdio.h>
struct distance
{
	int inches,feet;
};
int main()
{
	struct distance d1,d2,d3;
	printf("Enter inches d1");
	scanf("%d",&d1.inches);
	printf("Enter feet d1");
    scanf("%d",&d1.feet);
//    int da=d1.inches+d1.feet;
//    printf("%d",da);
    printf("Enter inches d2");
	scanf("%d",&d2.inches);
	printf("Enter feet d2");
    scanf("%d ",&d2.feet);
//    int db=d2.inches+d2.feet;
//    printf("%d",db);

//	d3.feet=d1.feet+d2.feet;
//	printf("%d",d3.feet);
	if(d3.inches>=12)
	{
		d3.feet+=1;
		d3.inches==12;
	}
	printf("%d %d",d3.feet,d3.inches);
}

