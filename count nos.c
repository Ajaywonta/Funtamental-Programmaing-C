/* WAP to count number of digits in anu number
*/

/*#include<stdio.h>

int main(){
	int a,b=0;
		printf("Enter nos to count");
		scanf("%d",&a);
		
	for(;a>=10;){
	a=a/10;
	b++;}
		printf("You have enter %d nos",b);
	return 0;
}
*/
#include<stdio.h>

int main(){
	int a,b=0;
		printf("Enter nos to count");
		scanf("%d",&a);
		
	while(a!=0){
	a=a/10;
	b++;}
		printf("You have enter %d nos",b);
	return 0;
}
