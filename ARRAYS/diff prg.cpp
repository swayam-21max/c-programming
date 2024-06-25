	 	 
#include <stdio.h> 
#define MAX_SIZE 100 
void insert(int arr[], int *size, int element, int position) { if (*size >= MAX_SIZE || position < 0 || position > *size) { printf("Invalid insertion.\n"); return; 
} 
for (int i = *size; i > position; i--) arr[i] = arr[i - 1]; 
arr[position] = element; 
(*size)++; 
printf("Element inserted successfully.\n"); 
} 
void update(int arr[], int size, int position, int newValue) { if (position < 0 || position >= size) { printf("Invalid position for update.\n"); return; 
} arr[position] = newValue; 
printf("Element updated successfully.\n"); 
} 
int delete(int arr[], int *size, int position) { if (position < 0 || position >= *size) { printf("Invalid position for deletion.\n"); return; 
} for (int i = position; i < *size - 1; i++) arr[i] = arr[i + 1]; 
(*size)--; 
printf("Element deleted successfully.\n"); 
} 
void display(int arr[], int size) { printf("Array: "); for (int i = 0; i < size; i++) printf("%d ", arr[i]); 
printf("\n"); 
} 
int search(int arr[], int size, int element) { for (int i = 0; i < size; i++) if (arr[i] == element) return i; 
return -1; 
} 
int main() { 
	 int array[MAX_SIZE]; 
int size = 0, choice, element, position, newValue, searchResult; 
do { printf("\n1. Insert\n2. Update\n3. Delete\n4. Display\n5. Search\n6. Exit\nEnter your choice: "); scanf("%d", &choice); switch (choice) { case 1: 
printf("Enter element and position to insert: "); scanf("%d %d", &element, &position); insert(array, &size, element, position); break; 
case 2: 
printf("Enter position and new value to update: "); scanf("%d %d", &position, &newValue); update(array, size, position, newValue); break; 
case 3: 
printf("Enter position to delete: "); scanf("%d", &position); delete(array, &size, position); break; 
case 4: display(array, size); break;
case 5:
	printf("enter element to search:");
	scanf("%d",&element);
	searchResult=search(array,size,element);
	if(searchResult1=-1)
	 printf("element at position:%d\n",searchResult);
	else
	 printf("element dne\n");
	 break;
case 6:
printf("exit\n");
break;
default:
printf("invalid choice");
}
}
while(choice!=6);
return 0;
}
