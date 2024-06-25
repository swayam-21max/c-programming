
int sumArray(int arr[], int size) { int sum = 0; 
for (int i = 0; i < size; i++) { sum += arr[i]; 
} return sum; 
} 
int main() 
{ int size;
 

scanf("%d", &size); int array[size]; 
printf("Enter %d elements:\n", size); for (int i = 0; i < size; i++) { printf("Element %d: ", i + 1); scanf("%d", &array[i]); 
} 
int sum = sumArray(array, size); 
printf("Sum of array elements: %d\n", sum); return 0; 
} 

