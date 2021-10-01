#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//

void main() {
float x,y;
float op;
	char z;	
		printf("please enter the operator\n");
	scanf("%c",&z);
	
	
	printf("please enter Number_1\n");
	scanf("%f",&x);
	
		printf("please enter number_2\n");
		scanf("%f",&y);
	
	
		if (z=='+')
		{
			op = x+y;
			printf("the result = %f \n", op);
		}
		else if(z=='-')
		{
			op = x-y;
			printf("the result = %f \n",op);
		}
		else if(z=='*')
		{
			op = x*y;
			printf("the result = %f \n",op);
		}
		else if(z=='/')
		{
		
			op = x / y;
			printf("the result = %f \n",op);
		}
		else
		{
			printf("ERROR! please enter a valid operator");
		}
}
