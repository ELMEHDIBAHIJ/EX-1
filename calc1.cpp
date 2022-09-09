#include <stdio.h>
int main()
{



char Operator;
	int num1, num2, result = 0;
	printf("chose your operation(+, -, x, /)  : \n ");
  	scanf("%c", &Operator);	
	printf("Enter num1 :  \n");
  	scanf("%d", &num1);
  	printf("Enter num2 :  \n");
  	scanf("%d", &num2);
  	if(Operator == '+')
  	{
  		printf("The result of %d + %d  = %d\n ", num1, num2, num1 + num2);
  	}
  	else if(Operator == '-')
  	{
  		printf("The result of %d - %d  = %d\n ", num1, num2, num1 - num2);
  	}
  	else if(Operator == 'x')
  	{
  		printf("The result of %d * %d  = %d\n ", num1, num2, num1 * num2);
  	}
  	else if(Operator == '/')
  	{
  		printf("The result of %d / %d  = %d\n ", num1, num2, num1 / num2);
  	}
  	else
  	{
  		printf("invalid operation ");
	}
	
  	return 0;
}
