#include<stdio.h>
int main()
{
	int level,basic_pay;
	float house_rent,conveyence,entertainment;
	scanf("%d",&level);
	scanf("%d",&basic_pay);
	switch(level)
	{
		case 1:
			conveyence=1000;
			entertainment=500;
			break;
		case 2:
			conveyence=750;
			entertainment=200;
			break;
		case 3:
			conveyence=500;
			entertainment=100;
			break;
		case 4:
			conveyence=250;
			entertainment=0;
			break;
		default:
			printf("invalid level");
			break;
							
	}
	house_rent=0.25*basic_pay;
	float gross_sal=basic_pay+house_rent+conveyence+entertainment;
	printf("%.2f",gross_sal);
}
//#include <stdio.h>

//int main() {
//    int level, basicPay;
//    float houseRentAllowance, conveyanceAllowance, entertainmentAllowance, grossSalary;
//
//    // Input
//    printf("Enter the level number: ");
//    scanf("%d", &level);
//    printf("Enter the basic pay: ");
//    scanf("%d", &basicPay);
//
//    // Calculate allowances based on level
//    switch(level) {
//        case 1:
//            conveyanceAllowance = 1000;
//            entertainmentAllowance = 500;
//            break;
//        case 2:
//            conveyanceAllowance = 750;
//            entertainmentAllowance = 200;
//            break;
//        case 3:
//            conveyanceAllowance = 500;
//            entertainmentAllowance = 100;
//            break;
//        case 4:
//            conveyanceAllowance = 250;
//            // No entertainment allowance for level 4
//            entertainmentAllowance = 0;
//            break;
//        default:
//            printf("Invalid level number!\n");
//            return 1; // Exit program with error
//    }
//
//    // Calculate house rent allowance (25% of basic pay)
//    houseRentAllowance = 0.25 * basicPay;
//
//    // Calculate gross salary
//    grossSalary = basicPay + houseRentAllowance + conveyanceAllowance + entertainmentAllowance;
//
//    // Output
//    printf("Gross Salary: %.2f\n", grossSalary);
//
//    return 0;
//}

