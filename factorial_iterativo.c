/*#include<stdio.h>
long int factorial(int);

int main()
{
int number, fact;

printf("Enter the number to find the factorial:");
scanf("%d", &number);

if(number < 0)
printf("Negative integer factorial is not described.\n");
else
{
fact = factorial(number);
printf("Factorial of the given number %d is %d ", number, fact);
}
return 0;
}


long int factorial(int number)
{
	if (number == 0)
		return 1;
	else if (number == 1)
		return 1;
	else
    	return(number * factorial(number - 1));
}*/

#include<stdio.h>
long int factorial(int,int);

int main()
{
int number, fact, a;

printf("Enter the number to find the factorial:");
scanf("%d", &number);

if(number < 0)
printf("Negative integer factorial is not described.\n");
else
{
fact = factorial(number, a);
printf("Factorial of the given number %d is %d ", number, fact);
}
return 0;
}


long int factorial(int number, int a)
{
	if (number == 0)
		return 1;
	else if (number == 1)
		return a;
	else
    	return factorial(number - 1, number*a);
}