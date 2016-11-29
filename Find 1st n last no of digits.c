/* WAP to find frist and last digits of any number
*/

#include<stdio.h>

int main(){
	int a,b=0;
		printf("Enter digits to find 1st and last nos\n");
		scanf("%d",&a);
		
	b=a%10;
		printf("Last digit is %d \n",b);
	
	for(;a>=10;){
		a=a/10;}
		printf("1st dits is %d \n",a);
	
return 0;
}
