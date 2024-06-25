#include <stdio.h>

int main() {
       int arr[5] ;
       int i;
       for(i=0;i<5;i++)
       {
       	scanf("%d",&arr[i]);
	   }
    
       int largest = arr[0];
	   int second_largest = arr[0];
    
    
    for ( i = 0; i < 5; i++) {
                if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
       printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", second_largest);
    return 0;
}

