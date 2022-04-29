#include <stdio.h>
#include <math.h>

int main()
{

int option;
float addnum1, addnum2, sum;
float subnum1, subnum2, diff;
double multnum1, multnum2, prod;
double divnum1, divnum2, quotient;
int remnum1, remnum2, remainder;
double num1, pwr_val; int pwr;
float num2, sqrroot;

printf("Welcome to Arithmetic Calculator!");
printf("Enter your choice\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division(Quotient)\n5.Division(Remainder)\n6.Power\n7.Square Root\n");
scanf("%d",&option);

	
if (option == 1) {
	printf("Addition\nEnter two numbers:\n");
	scanf("%f%f", &addnum1, &addnum2);
	sum = addnum1+addnum2;
	printf("The Sum is %.4f", sum);
	}
		
else if (option == 2) {
	printf("Subtraction\nEnter two numbers:\n");
	scanf("%f%f", &subnum1, &subnum2);
	diff = subnum1-subnum2;
	printf("The Difference is %.4f", diff);
	}

else if (option == 3) {
	printf("Multiplication\nEnter two numbers:\n");
	scanf("%lf%lf", &multnum1, &multnum2);
	prod = multnum1*multnum2;
	printf("The Product is %.4lf", prod);
	}
	
else if (option == 4) {
	printf("Division(Quotient)\nEnter two numbers:\n");
	scanf("%lf%lf", &divnum1, &divnum2);
	quotient = divnum1/divnum2;
	printf("The Quotient is %.4lf", quotient);
	}
		
else if (option == 5) {
	printf("Division(Remainder)\nEnter two numbers:\n");
	scanf("%d%d", &remnum1, &remnum2);
	remainder = remnum1%remnum2;
	printf("The Remainder is %d", remainder);
	}
	
else if (option == 6) {
		printf("Power\nEnter a number and power:\n");
		scanf("%lf%d", &num1, &pwr);
		pwr_val = pow(num1, pwr);
		printf("The value is %.4lf", pwr_val);
		}
		
else if (option == 7) {
	printf("Square Root\nEnter a number:\n");
	scanf("%f", &num2);
	sqrroot = sqrt(num2);
	printf("The Square of %f is %.4f", num2, sqrroot);
	}

else {
	printf("Choice is wrong!");
	}
}
