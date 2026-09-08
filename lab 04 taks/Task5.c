#include<stdio.h>
int main(){
    int a,b,result;
    char opr;
    printf("enter the first number: ");
    scanf("%i",&a);
    printf("enter the second number: ");
    scanf("%i",&b);
    printf("Enter your operator (+,-,*,/): ");
    scanf(" %c",&opr);
	switch(opr){
        case '+':
         result=a+b;
         printf("%i",result);
         break;
        case '-':
         result=a-b;
         printf("%i",result);
         break;
        case '*':
         result=a*b;
         printf("%i",result);
         break;
        case '/':
        	if (b==0){
        		printf("denominator should not be 0");
			}
			else
			 result=a/b;
             printf("%i",result);
             
         break;
        default:
        	printf("Not a valid operator");

    }
 return 0;
}