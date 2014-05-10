/* program by Maadadi Imad */
/* Assignment #2 */

#include <stdio.h>
int main(void)

{
double a, b, result;
char op;

/* A presentation of the program */
printf("-o.O[ Calculator ]O.o-\n");
printf("-o.O[ You can calculate basic operations with this program ]O.o-\n");
printf("-o.O[ Press Ctrl+c to quit ]O.o-\n\n");

while(1) {  /* A loop to keep repeating the program */

printf("\nPlease enter the first number : ");
scanf("%lf", &a);

printf("Please enter the operation :");
scanf(" %c", &op);

printf("Please enter the second number : ");
scanf("%lf", &b);

	switch (op) {
		
case '+' : result = a + b;
           printf("\nThe result is %.2f \n", result);
         break;
         
case '-' : result = a - b;
           printf("\nThe result is %.2f \n", result);
         break;
		 
case '*' : result = a * b;
           printf("\nThe result is %.2f \n", result);
         break;
		 
case '/' : 
           if(b!=0)  /* with this condition if the second number is 0, the operation will not be done */
		   	{
           result = a / b;
           printf("\nThe result is %.2f \n", result);
           }
           else 
		   {	
           	printf("You cannot devide a number by 0");
           }
		 break;
default : 
         printf("Unknown operation"); 
		 }
}
		return (0);
		}

