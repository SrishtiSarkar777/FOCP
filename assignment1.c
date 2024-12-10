//1.
#include<stdio.h>
int main() {
    int number, originalNumber, remainder, n = 0, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);  
        originalNumber /= 10;
    }
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

//2.
#include<stdio.h>
int main()
{
    int num1, num2, hcf = 1;
    printf("Enter the first number: "); 
    scanf("%d", &num1); 
    printf("Enter the second number: "); 
    scanf("%d", &num2);   
    for(int i = 1; i <= num1 || i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    
    printf("The HCF: %d", hcf);
    
    return 0;
}

//3.
#include<stdio.h>
int main() { 
    int num1, num2, result; 
    result = num1 - num2;  
    printf("Enter the first number: "); 
    scanf("%d", &num1); 
    printf("Enter the second number: "); 
    scanf("%d", &num2);   
    
    printf("The result of %d - %d is: %d\n", num1, num2, result); 
    return 0;
} 

//4. one way
#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);
  temp = first;
  first = second;
  second = temp;
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}
//2nd way
int main() {
  double a, b;
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);

  a = a - b;   
  b = a + b;
  printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf", b);

  return 0;
}
//3rd way
int main() {
  double a, b;
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);
  a = a - b;   
  b = a + b;
  a = b - a;
  printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf", b);

  return 0;
}
//4th way
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);

  // value of first is assigned to temp
  temp = first;

  // value of second is assigned to first
  first = second;

  // value of temp (initial value of first) is assigned to second
  second = temp;

  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}

//5th way

int main() {
    int num1, num2, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

//5.
#include<stdio.h>
int main ()
{
    int num, sum = 0;
    printf("Enter the first number: "); 
    scanf("%d", &num);   
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            sum = sum + i;
    }
    
    if(sum == num)
        printf("%d is a perfect number",num);
    else
        printf("%d is not a perfect number",num);
    

}

//6.
void main()
{
    int co1, co2;   // Declare two integer variables 'co1' and 'co2' to store coordinates.

    printf("Input the values for X and Y coordinate : ");   // Prompt the user to input coordinates.
    scanf("%d %d", &co1, &co2);   // Read and store the user's input in 'co1' and 'co2'.

    if (co1 > 0 && co2 > 0)   // Check if both 'co1' and 'co2' are positive.
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", co1, co2);   // Print a message indicating the quadrant.
    else if (co1 < 0 && co2 > 0)   // Check if 'co1' is negative and 'co2' is positive.
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", co1, co2);   // Print a message indicating the quadrant.
    else if (co1 < 0 && co2 < 0)   // Check if both 'co1' and 'co2' are negative.
        printf("The coordinate point (%d, %d) lies in the Third quadrant.\n", co1, co2);   // Print a message indicating the quadrant.
    else if (co1 > 0 && co2 < 0)   // Check if 'co1' is positive and 'co2' is negative.
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", co1, co2);   // Print a message indicating the quadrant.
    else if (co1 == 0 && co2 == 0)   // Check if both 'co1' and 'co2' are zero.
        printf("The coordinate point (%d,%d) lies at the origin.\n", co1, co2);   // Print a message indicating that it's at the origin.
}

//7.
#include <iostream>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
	int num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 2;
	}

	return dec_value;
}

int main()
{
	int num = 10101001;

	cout << binaryToDecimal(num) << endl;
}
//8
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n;
 clrscr();
 printf("\n Enter the value of n:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  for(j=1;j<i;j++)
  {
   if((i+j)%2==0)
   {
  printf("\t 0");
   }
 else
 {
  printf("\t 1");
 }
  }
 printf("\n");
 }
getch();

}
//10

#include <stdio.h>
void printPascal(int n)
{
    for (int line = 1; line <= n; line++) {
        for (int space = 1; space <= n - line; space++)
            printf("  ");
        // used to represent C(line, i)
        int coef = 1;
        for (int i = 1; i <= line; i++) {
            // The first value in a line
            // is always 1
            printf("%4d", coef);
            coef = coef * (line - i) / i;
        }
        printf("\n");
    }
}

// Driver code
int main()
{
    int n = 5;
    printPascal(n);
    return 0;
}