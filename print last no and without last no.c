/*Name:-AjayWonta
WAP to print last disit of any number and number with out last digit
ASk use for enter divisior
*/

#include<stdio.h>

int main(){
	int num, lastdgt,withoutlastdgt;
		printf("Enter a number at least 3 number :");
		scanf("%d",&num);
	
	lastdgt=num%10;
		printf("\nLast digit is %d",lastdgt);
	
	withoutlastdgt=num/10;
		printf("\nwithout Last digit is %d",withoutlastdgt);
return 0;
}
