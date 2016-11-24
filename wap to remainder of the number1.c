/*Name:-AjayWonta
ASk use for enter divisior
*/

#include<stdio.h>

int main(){
int num1,num2,rem;
printf("Enter a number 1: ");
scanf("%d",&num1);
printf("Enter a number 2: ");
scanf("%d",&num2);
rem = num1%num2;
printf("When %d is divided by %d, rem = %d.",num1,num2,rem );
return 0;
}
