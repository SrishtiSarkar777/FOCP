//1.
#include <stdio.h>

int main()
{
	int Size, i;

	printf("Please Enter the Array size = ");
	scanf("%d", &Size);

	int arr[Size];

	printf("Enter the Array %d elements : ", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < Size; i++)
	{
		arr[i] = arr[i] + 1;
	}

	printf("\nThe Final Array After Incremented by One = ");
	for (i = 0; i < Size; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

//2.
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<40)
    {
        printf("Grade D");
    }
    else if(marks>=59 && marks<=40)
    {
        printf("Grade C");
    }
    else if(marks>=74 && marks<=60)
    {
        printf("Grade B");
    }
    else if(marks>=75 && marks<=90)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }
}

//2.
#include <stdio.h>

int main() {
    int arr[] = {45, 67, 12, 100, 34, 89, 100, 56};  
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    for(i = 0; i < size; i++) {
        if(arr[i] == 100) {
            printf("First occurrence of 100 is at index: %d\n", i);
            break;  
        }
    }

    if(i == size) {
        printf("100 is not found in the array.\n");
    }

    return 0;
}

//3.
#include <stdio.h>

int main() {
    int arr[] = {45, 67, 12, 100, 34, 89, 100, 56};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    // Loop through the array to find the first occurrence of 99
    for(i = 0; i < size; i++) {
        if(arr[i] == 99) {
            printf("First occurrence of 99 is at index: %d\n", i);
            break;  // Exit the loop after finding the first occurrence
        }
    }
    // If 99 is not found in the array
    if(i == size) {
        printf("100 is not found in the array.\n");
    }

    return 0;
}

//4.
#include <stdio.h>

int main() {
    int arr[];
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    for(int i = 0; i < size; i++) {
        if(arr[i] == 100) {
            count++; 
        }
    }

    printf("Total number of times 100 appears: %d\n", count);
    
    return 0;
}
//5
#include<stdio.h>

int main()
{
    int arr[100], size, i, sum = 0;
    
    printf("Enter array size\n");
    scanf("%d",&size);
    
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; 
    
    printf("Sum of the array = %d\n",sum);
    
    return 0;
}
//6.
#include<stdio.>
int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int sum, loop;
   float avg;

   sum = avg = 0;
   
   for(loop = 0; loop < 10; loop++) 
   {
      sum = sum + array[loop];
   }
   
   avg = (float)sum / loop;
   printf("Average of array values is %.2f", avg);   
   
   return 0;
}

//7.
#include <stdio.h>
void main() 
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
 
    int arr[n];
 
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 
    printf("Even numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
 
    printf("\nOdd numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
            printf("%d ", arr[i]);
    }
}

//8.
#include <stdio.h>

int main()
{
    int arr1[100];
    int i, mx, mn, n;

    // Prompt user for input
    printf("\n\nFind maximum and minimum element in an array :\n");
    printf("--------------------------------------------------\n");
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    // Input elements for the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Initialize max (mx) and min (mn) with the first element of the array
    mx = arr1[0];
    mn = arr1[0];

    // Traverse the array to find the maximum and minimum elements
    for (i = 1; i < n; i++)
    {
        // Update mx if the current element is greater
        if (arr1[i] > mx)
        {
            mx = arr1[i];
        }

        // Update mn if the current element is smaller
        if (arr1[i] < mn)
        {
            mn = arr1[i];
        }
    }

    // Print the maximum and minimum elements
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
	return 0;
}

//9.
#include<stdio.h>  
int Peak(int arr[], int n)  
{  
    int i;  
    if(n == 1)  
    {  
        return 0;  
    }  
    if(arr[0] >= arr[1])  
    {  
        return 0;  
    }  
    if(arr[n - 1] >= arr[n - 2])  
    {  
        return n - 1;  
    }  
    for(i = 1; i < n - 1; i++)  
    {  
        if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])  
        {  
            return i;  
        }  
    }  
}  
int main()  
{  
    int size, i, Array [size];  
    printf("Enter size of the array: ");  
    scanf("%d", &size);  
    printf("Enter the elements: ");  
    for(i = 0; i < size; i++)  
    {  
        scanf("%d", &array[i]);  
    }  
    printf("The first Peak element index in the Array: %d", Peak(array, size));  
}  
//10.
#include<stdio.h>
void main(){
   int arr[100],i,a,j,b,count=0;
   printf("Enter size of an array:");
   scanf("%d",&a);
   printf("Enter array elements:");
   for (i=0;i<a;i++){
       scanf("%d",&arr[i]);
   }
   printf("All prime list is:");
   for(i=0;i<a;i++){
       j=2;
       b=1;
       while(j<arr[i]){
           if(arr[i]%j==0){
               b=0;
               break;
           }
           j++;
       }
       if(b==1){
           count=count+1;
        printf("%d ",arr[i]);
       }
   }
    printf("\nthe total prime number is %d ",count);
}

//11.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertBefore(int arr[], int *size, int value, int index) {
    if (*size >= 100) {
        printf("Array is full! Cannot insert.\n");
        return;
    }

    // Shift elements to the right to make space for the new value
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value before the index
    arr[index] = value;
    (*size)++;
}

void insertAfter(int arr[], int *size, int value, int index) {
    if (*size >= 100) {
        printf("Array is full! Cannot insert.\n");
        return;
    }

    // Shift elements to the right to make space for the new value
    for (int i = *size; i > index + 1; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value after the index
    arr[index + 1] = value;
    (*size)++;
}

void insertRandom(int arr[], int *size, int value) {
    if (*size >= 100) {
        printf("Array is full! Cannot insert.\n");
        return;
    }

    // Generate a random index between 0 and *size
    int randomIndex = rand() % (*size + 1);

    // Shift elements to the right to make space for the new value
    for (int i = *size; i > randomIndex; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value at the random index
    arr[randomIndex] = value;
    (*size)++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    srand(time(0)); // Seed for random number generation
    
    int arr[100] = {10, 20, 30, 40, 50}; // Example array
    int size = 5;  // Current size of the array

    printf("Original array: ");
    printArray(arr, size);

    // Insert a number before a specific index (index 2)
    insertBefore(arr, &size, 100, 2);
    printf("Array after inserting 100 before index 2: ");
    printArray(arr, size);

    // Insert a number after a specific index (index 3)
    insertAfter(arr, &size, 200, 3);
    printf("Array after inserting 200 after index 3: ");
    printArray(arr, size);

    // Insert a number randomly in the array
    insertRandom(arr, &size, 300);
    printf("Array after inserting 300 randomly: ");
    printArray(arr, size);

    return 0;
}

//12.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void deleteBefore(int arr[], int *size, int index) {
    if (index <= 0 || index >= *size) {
        printf("Invalid index for deletion.\n");
        return;
    }

    // Shift elements left to fill the gap created by deletion
    for (int i = index - 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--; // Decrease the size of the array
}

void deleteAfter(int arr[], int *size, int index) {
    if (index < 0 || index >= *size - 1) {
        printf("Invalid index for deletion.\n");
        return;
    }

    // Shift elements left to fill the gap created by deletion
    for (int i = index + 1; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--; // Decrease the size of the array
}

void deleteRandom(int arr[], int *size) {
    if (*size <= 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }

    // Generate a random index between 0 and *size-1
    int randomIndex = rand() % (*size);

    // Shift elements left to fill the gap created by deletion
    for (int i = randomIndex; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--; // Decrease the size of the array
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    srand(time(0)); // Seed for random number generation
    
    int arr[100] = {10, 20, 30, 40, 50}; // Example array
    int size = 5;  // Current size of the array

    printf("Original array: ");
    printArray(arr, size);

    // Delete an element before a specific index (index 2)
    deleteBefore(arr, &size, 2);
    printf("Array after deleting element before index 2: ");
    printArray(arr, size);

    // Delete an element after a specific index (index 2)
    deleteAfter(arr, &size, 2);
    printf("Array after deleting element after index 2: ");
    printArray(arr, size);

    // Delete a random element in the array
    deleteRandom(arr, &size);
    printf("Array after deleting a random element: ");
    printArray(arr, size);

    return 0;
}

//13.
#include <stdio.h>

void rotate(int arr[], int n)
{
    if (n <= 1) return;  // No rotation needed for empty or single-element arrays

    // Store the last element in a variable
    int last_el = arr[n - 1];

    // Shift every element to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Assign the last element to the first position
    arr[0] = last_el;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Printing the initial array
    printf("Given array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Calling the rotate function
    rotate(arr, n);

    // Printing the rotated array
    printf("Rotated array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//14.
#include <stdio.h>

void printDuplicates(int arr[], int n) {
    int foundDuplicate = 0;  
    
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate) {
            printf("%d ", arr[i]);
            foundDuplicate = 1;
        }
    }
    if (!foundDuplicate) {
        printf("-1\n");
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 3};  
    printf("Enter the size of the array: ");
    scanf("%d", &n); 
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Duplicate elements are: ");
    printDuplicates(arr, n);

    return 0;
}
